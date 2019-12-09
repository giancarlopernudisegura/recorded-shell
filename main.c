#include "main.h"

int main(int argc, char ** argv) {
    char * command;
    command = (char *) malloc(sizeof(short));
    FILE * test = readFile(argv[1]);
    fscanf(test, "%s\n", command);
    type(command);
    return 0;
}
