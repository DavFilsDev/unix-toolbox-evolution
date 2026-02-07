#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int ch;
    long characters = 0;
    long words = 0;
    long lines = 0;
    int in_word = 0;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(file);

    printf("File: %s\n", argv[1]);
    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}
