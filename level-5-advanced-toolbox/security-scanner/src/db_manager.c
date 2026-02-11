#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include "hash_utils.h"
#include "db_manager.h"

#define DB_FILE "../database/baseline.db"

void save_baseline(const char *path) {
    FILE *db = fopen(DB_FILE, "w");
    DIR *dir = opendir(path);
    struct dirent *entry;

    char hash[65];

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) {
            char filepath[512];
            snprintf(filepath, sizeof(filepath), "%s/%s", path, entry->d_name);

            compute_sha256(filepath, hash);
            fprintf(db, "%s %s\n", filepath, hash);
        }
    }

    closedir(dir);
    fclose(db);
}
