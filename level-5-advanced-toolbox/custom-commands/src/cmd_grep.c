#include <stdio.h>
#include <string.h>
#include "cmd_grep.h"

void custom_grep(const char *pattern, const char *file) {
    FILE *f = fopen(file, "r");
    if (!f) return;

    char line[256];
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, pattern)) {
            printf("%s", line);
        }
    }
    fclose(f);
}
