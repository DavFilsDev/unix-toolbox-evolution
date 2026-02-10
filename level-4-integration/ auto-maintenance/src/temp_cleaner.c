#include <stdio.h>
#include <stdlib.h>
#include "maintenance.h"

void clean_temp_files() {
    printf("[INFO] Cleaning temporary files...\n");
    system("find /tmp -type f -atime +7 -delete 2>/dev/null");
    printf("[DONE] Temporary files cleaned.\n");
}
