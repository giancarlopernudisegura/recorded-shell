#include "main.h"

int main(int argc, char ** argv) {
    FILE * test = readFile(argv[1]);
    char * command;
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
