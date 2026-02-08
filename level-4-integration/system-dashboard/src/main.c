#include <stdio.h>
#include "dashboard.h"

int main() {
    printf("=====================================\n");
    printf("         SYSTEM DASHBOARD             \n");
    printf("=====================================\n");

    show_cpu_info();
    show_memory_info();
    show_disk_info();

    printf("=====================================\n");
    return 0;
}