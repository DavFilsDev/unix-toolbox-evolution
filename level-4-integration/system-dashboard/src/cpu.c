#include <stdio.h>
#include "dashboard.h"

void show_cpu_info() {
    FILE *file = fopen("/proc/loadavg", "r");
    if (!file) {
        perror("CPU info error");
        return;
    }

    float load1, load5, load15;
    fscanf(file, "%f %f %f", &load1, &load5, &load15);
    fclose(file);

    printf("CPU Load (1m, 5m, 15m): %.2f %.2f %.2f\n", load1, load5, load15);
}