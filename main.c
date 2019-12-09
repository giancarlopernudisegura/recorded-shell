#include "main.h"

int main(int argc, char ** argv) {
    if (argc == 1 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        printHelp();
        exit(0);
    };
    FILE * test = readFile(argv[1]);
    char * command;
    system("clear");
    for (;;) {
        command = readLine(test);
        if (command == NULL) {
            break;
        }
        type(command);
        system(command);
    }
    free(command);
    return 0;
}

void printHelp() {
    printf("Usage: rs [FILE]\n");
    printf("Run prerecorded shell scripts.\n\n");
}
