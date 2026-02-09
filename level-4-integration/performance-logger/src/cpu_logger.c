#include <stdio.h>
#include "logger.h"

void log_cpu(FILE *logfile) {
    FILE *file = fopen("/proc/loadavg", "r");
    if (!file) {
        perror("CPU log error");
        return;
    }

    float l1, l5, l15;
    fscanf(file, "%f %f %f", &l1, &l5, &l15);
    fclose(file);

    fprintf(logfile, "CPU Load: %.2f %.2f %.2f\n", l1, l5, l15);
}
