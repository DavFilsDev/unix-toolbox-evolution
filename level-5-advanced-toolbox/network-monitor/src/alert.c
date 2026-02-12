#include <stdio.h>
#include "alert.h"

void check_alerts(ConnectionList list, NetworkStats stats) {
    if (stats.total_connections > 100) {
        printf("[ALERT] Too many connections! Possible attack.\n");
    }

    for (int i = 0; i < list.count; i++) {
        if (list.items[i].remote_port == 4444 || list.items[i].remote_port == 1337) {
            printf("[ALERT] Suspicious port detected: %d\n", list.items[i].remote_port);
        }
    }
}
