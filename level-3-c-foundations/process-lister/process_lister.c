#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
#include <string.h>

/*
 * Process Lister
 * Lists PID and process name from /proc
 */

int is_number(const char *str) {
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int main() {
    DIR *proc = opendir("/proc");
    struct dirent *entry;

    if (!proc) {
        perror("Error opening /proc");
        return 1;
    }

    printf("=====================================\n");
    printf("            PROCESS LISTER           \n");
    printf("=====================================\n");
    printf("%-10s %s\n", "PID", "PROCESS NAME");
    printf("-------------------------------------\n");

    while ((entry = readdir(proc)) != NULL) {
        if (is_number(entry->d_name)) {
            char path[256];
            char name[256];
            FILE *file;

            snprintf(path, sizeof(path), "/proc/%s/comm", entry->d_name);
            file = fopen(path, "r");

            if (file) {
                fgets(name, sizeof(name), file);
                name[strcspn(name, "\n")] = 0; // remove newline
                printf("%-10s %s\n", entry->d_name, name);
                fclose(file);
            }
        }
    }

    closedir(proc);
    return 0;
}