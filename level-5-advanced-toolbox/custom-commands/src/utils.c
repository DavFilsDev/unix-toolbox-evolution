#include <stdio.h>
#include "utils.h"

void print_error(const char *msg) {
    fprintf(stderr, "[ERROR] %s\n", msg);
}

void print_banner() {
    printf("=== Custom Unix Commands Toolbox ===\n");
}
