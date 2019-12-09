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
