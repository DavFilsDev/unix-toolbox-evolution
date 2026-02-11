#include <stdio.h>
#include <string.h>
#include "db_manager.h"
#include "scanner.h"

void scan_system(const char *path) {
    printf("[*] Scanning %s for integrity issues...\n", path);
    check_integrity(path);
}
