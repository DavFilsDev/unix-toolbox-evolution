#include <stdio.h>
#include <dirent.h>
#include "cmd_ls.h"

void custom_ls(const char *path) {
    DIR *d = opendir(path ? path : ".");
    if (!d) return;

    struct dirent *dir;
    while ((dir = readdir(d))) {
        printf("%s  ", dir->d_name);
    }
    printf("\n");
    closedir(d);
}
