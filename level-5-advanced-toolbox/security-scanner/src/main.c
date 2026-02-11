#include <stdio.h>
#include "scanner.h"
#include "db_manager.h"
#include "config.h"

int main(int argc, char *argv[]) {
    const char *path = get_scan_path();

    if (argc > 1 && strcmp(argv[1], "--baseline") == 0) {
        printf("[+] Creating baseline...\n");
        save_baseline(path);
        return 0;
    }

    scan_system(path);
    return 0;
}
