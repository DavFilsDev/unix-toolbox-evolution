#include <stdio.h>
#include "maintenance.h"

int main() {
    printf("        AUTO MAINTENANCE SYSTEM       \n");

    clean_temp_files();
    clean_logs();
    check_disk_space();

    return 0;
}
