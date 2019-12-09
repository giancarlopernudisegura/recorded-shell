#include "type.h"

void type(const char * text) {
    register short length = strlen(text);
    printf("%s$ %s", GRN, RESET);
    for (register short i = 0; i < length - 1; i++) {
        putchar(text[i]);
        //cursor();
    }
    getc(stdin);
}

void cursor() {
    printf("█");
    putchar('\b');
}

void delay(long milliseconds) {
    for (register unsigned long long i = 0; i < ULLONG_MAX; i++);
}
