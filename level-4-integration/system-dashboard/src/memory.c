#include <stdio.h>
#include "dashboard.h"

void show_memory_info() {
    FILE *file = fopen("/proc/meminfo", "r");
    if (!file) {
        perror("Memory info error");
        return;
    }

    long total, free, available;
    char label[64];

    fscanf(file, "%s %ld kB", label, &total);
    fscanf(file, "%s %ld kB", label, &free);
    fscanf(file, "%s %ld kB", label, &available);

    fclose(file);

    printf("Memory: Total %ld MB | Free %ld MB | Available %ld MB\n",
           total / 1024, free / 1024, available / 1024);
}
