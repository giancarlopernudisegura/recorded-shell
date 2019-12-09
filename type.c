#include "type.h"

void type(const char * text) {
    register short length = strlen(text);
    printf("$ ");
    getc(stdin);
    for (register short i = 0; i < length; i++) {
        putchar(text[i]);
        cursor();
    }
}

void cursor() {
    printf("█");
    putchar('\b');
}

void delay(long milliseconds) {
    for (register unsigned long long i = 0; i < ULLONG_MAX; i++);
}
