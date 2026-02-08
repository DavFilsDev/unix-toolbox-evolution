#include <stdio.h>
#include <sys/statvfs.h>
#include "dashboard.h"

void show_disk_info() {
    struct statvfs fs;
    if (statvfs("/", &fs) != 0) {
        perror("Disk info error");
        return;
    }

    long total = (fs.f_blocks * fs.f_frsize) / 1024 / 1024;
    long free = (fs.f_bfree * fs.f_frsize) / 1024 / 1024;

    printf("Disk: Total %ld MB | Free %ld MB\n", total, free);
}
