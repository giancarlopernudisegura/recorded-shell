#include "file.h"

FILE * readFile(const char * filename) {
    FILE * f = fopen(filename, "r");

    if (f == NULL) {
        fprintf(stderr, "Error: file <%s> not found.\n", filename);
        exit(2);
    }

    return f;
}

char * readLine(FILE * stream) {
    char * output;
    output = (char *) malloc(USHRT_MAX);
    register char currentChar;
    register short index = 0;
    do {
        currentChar = fgetc(stream);
        if (currentChar == EOF) {
            return NULL;
        }
        output[index++] = currentChar;
    } while (currentChar != '\n' && index < USHRT_MAX);
    return output;
}

void trim(char * str) {
    size_t i;
    for (i = 0; str[i] != '\0'; i++) {
        // isn't a whitespace (space or tab)
        if (str[i] != 32 && str[i] != 9) {
            break;
        }
    }
    for (size_t j = 0; ; j++) {
        str[j] = str[j + i];
        if (str[j] == '\0') {
            break;
        }
    }
}

_Bool isComment(char * str) {
    return str[0] == '#'? 1 : 0;
}
