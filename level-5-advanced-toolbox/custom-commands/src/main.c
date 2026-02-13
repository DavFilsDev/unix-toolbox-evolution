#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "cmd_ls.h"
#include "cmd_cat.h"
#include "cmd_grep.h"
#include "cmd_sysinfo.h"

int main(int argc, char *argv[]) {
    print_banner();

    if (argc < 2) {
        printf("Usage: customcmd <ls|cat|grep|sysinfo>\n");
        return 1;
    }

    if (strcmp(argv[1], "ls") == 0) {
        custom_ls(argc > 2 ? argv[2] : ".");
    } 
    else if (strcmp(argv[1], "cat") == 0 && argc > 2) {
        custom_cat(argv[2]);
    }
    else if (strcmp(argv[1], "grep") == 0 && argc > 3) {
        custom_grep(argv[2], argv[3]);
    }
    else if (strcmp(argv[1], "sysinfo") == 0) {
        custom_sysinfo();
    }
    else {
        print_error("Unknown command");
    }

    return 0;
}
