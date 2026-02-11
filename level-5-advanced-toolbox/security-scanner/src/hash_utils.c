#include <stdio.h>
#include <openssl/sha.h>
#include "hash_utils.h"

void compute_sha256(const char *filepath, char *output) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    FILE *file = fopen(filepath, "rb");
    if (!file) return;

    SHA256_CTX sha256;
    SHA256_Init(&sha256);

    unsigned char buffer[1024];
    int bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), file)) != 0) {
        SHA256_Update(&sha256, buffer, bytes);
    }

    SHA256_Final(hash, &sha256);
    fclose(file);

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        sprintf(output + (i * 2), "%02x", hash[i]);
}
