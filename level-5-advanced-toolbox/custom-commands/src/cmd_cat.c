#include <stdio.h>
#include "cmd_cat.h"

void custom_cat(const char *file) {
    FILE *f = fopen(file, "r");
    if (!f) return;

    char c;
    int line = 1;
    printf("%d: ", line);

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            line++;
            printf("\n%d: ", line);
        } else {
            putchar(c);
        }
    }

    fclose(f);
}
