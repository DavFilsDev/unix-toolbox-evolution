#include <stdio.h>
#include <time.h>
#include "logger.h"

int main() {
    FILE *logfile = fopen("performance.log", "a");
    if (!logfile) {
        perror("Log file error");
        return 1;
    }

    time_t now = time(NULL);
    fprintf(logfile, "LOG ENTRY: %s", ctime(&now));

    log_cpu(logfile);
    log_memory(logfile);
    log_disk(logfile);

    fclose(logfile);

    printf("Performance metrics logged to performance.log\n");
    return 0;
}