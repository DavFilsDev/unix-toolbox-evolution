#include <stdio.h>
#include <stdlib.h>

/*
 * Memory Monitor
 * Reads RAM usage from /proc/meminfo (Linux)
 */

void get_memory_info() {
    FILE *file = fopen("/proc/meminfo", "r");
    if (!file) {
        perror("Error opening /proc/meminfo");
        exit(1);
    }

    char label[50];
    long total, free, available;

    fscanf(file, "%s %ld kB", label, &total);
    fscanf(file, "%s %ld kB", label, &free);
    fscanf(file, "%s %ld kB", label, &available);

    fclose(file);

    printf("Total RAM: %ld MB\n", total / 1024);
    printf("Free RAM: %ld MB\n", free / 1024);
    printf("Available RAM: %ld MB\n", available / 1024);
    printf("Used RAM: %ld MB\n", (total - available) / 1024);
}

int main() {
    printf("================================\n");
    printf("         MEMORY MONITOR         \n");
    printf("================================\n");

    get_memory_info();

    return 0;
}
