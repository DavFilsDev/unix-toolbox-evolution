#include <stdio.h>
#include <sys/statvfs.h>
#include "logger.h"

void log_disk(FILE *logfile) {
    struct statvfs fs;
    if (statvfs("/", &fs) != 0) {
        perror("Disk log error");
        return;
    }

    long total = (fs.f_blocks * fs.f_frsize) / 1024 / 1024;
    long free = (fs.f_bfree * fs.f_frsize) / 1024 / 1024;

    fprintf(logfile, "Disk: Total=%ldMB Free=%ldMB\n", total, free);
}