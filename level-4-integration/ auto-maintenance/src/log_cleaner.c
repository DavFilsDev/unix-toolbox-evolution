#include <stdio.h>
#include <stdlib.h>
#include "maintenance.h"

void clean_logs() {
    printf("[INFO] Cleaning old log files...\n");
    system("find /var/log -type f -name '*.log' -size +10M -delete 2>/dev/null");
    printf("[DONE] Log cleanup completed.\n");
}
