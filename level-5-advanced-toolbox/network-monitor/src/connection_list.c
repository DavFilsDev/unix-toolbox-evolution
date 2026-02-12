#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "connection_list.h"

ConnectionList get_connections() {
    ConnectionList list;
    list.count = 0;
    list.items = malloc(sizeof(Connection) * 128);

    FILE *f = fopen("/proc/net/tcp", "r");
    if (!f) return list;

    char line[256];
    fgets(line, sizeof(line), f); // skip header

    while (fgets(line, sizeof(line), f) && list.count < 128) {
        unsigned int lip, rip;
        int lp, rp;
        sscanf(line, "%*d: %x:%x %x:%x", &lip, &lp, &rip, &rp);

        snprintf(list.items[list.count].local_ip, 64, "%d.%d.%d.%d",
                 lip & 255, (lip >> 8) & 255, (lip >> 16) & 255, (lip >> 24) & 255);
        snprintf(list.items[list.count].remote_ip, 64, "%d.%d.%d.%d",
                 rip & 255, (rip >> 8) & 255, (rip >> 16) & 255, (rip >> 24) & 255);

        list.items[list.count].local_port = lp;
        list.items[list.count].remote_port = rp;
        list.count++;
    }

    fclose(f);
    return list;
}

void show_connections(ConnectionList list) {
    printf("\nPID-independent TCP connections:\n");
    for (int i = 0; i < list.count; i++) {
        printf("%s:%d -> %s:%d\n",
               list.items[i].local_ip, list.items[i].local_port,
               list.items[i].remote_ip, list.items[i].remote_port);
    }
}

void free_connections(ConnectionList list) {
    free(list.items);
}
