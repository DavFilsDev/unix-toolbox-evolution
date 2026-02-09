#include <stdio.h>
#include "logger.h"

void log_memory(FILE *logfile) {
    FILE *file = fopen("/proc/meminfo", "r");
    if (!file) {
        perror("Memory log error");
        return;
    }

    long total, free, available;
    char label[64];

    fscanf(file, "%s %ld kB", label, &total);
    fscanf(file, "%s %ld kB", label, &free);
    fscanf(file, "%s %ld kB", label, &available);
    fclose(file);

    fprintf(logfile,
            "Memory: Total=%ldMB Free=%ldMB Available=%ldMB\n",
            total / 1024, free / 1024, available / 1024);
}
