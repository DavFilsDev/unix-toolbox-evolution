#include <stdio.h>
#include <sys/statvfs.h>
#include "maintenance.h"

void check_disk_space() {
    struct statvfs fs;
    if (statvfs("/", &fs) != 0) {
        perror("Disk check error");
        return;
    }

    long total = (fs.f_blocks * fs.f_frsize) / 1024 / 1024;
    long free = (fs.f_bfree * fs.f_frsize) / 1024 / 1024;
    long used = total - free;

    printf("Disk Usage: %ldMB used / %ldMB total\n", used, total);

    if ((used * 100) / total > 80) {
        printf("[WARNING] Disk usage above 80%%!\n");
    }
}
