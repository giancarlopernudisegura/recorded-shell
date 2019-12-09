#include "file.h"

FILE * readFile(const char * filename) {
    FILE * f = fopen(filename, "r");
    
    if (f == NULL) {
        fprintf(stderr, "Error: file <%s> not found.\n", filename);
        exit(2);
    }

    return f;
}
