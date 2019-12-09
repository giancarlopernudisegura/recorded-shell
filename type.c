#include "type.h"

void type(const char * text) {
    short length = strlen(text);
    printf("$ ");
    for (register short i = 0; i < length; i++) {
        putchar(text[i]);
        cursor();
    }
    putchar('\n');
}

void cursor() {
    putchar('|');
    putchar('\b');
}
