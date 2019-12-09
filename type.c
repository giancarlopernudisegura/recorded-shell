#include "type.h"

static const char * PROMPT = "$ ";

void type(const char * text) {
    register short length = strlen(text);
    printf("%s%s%s", GRN, PROMPT, RESET);
    for (register short i = 0; i < length - 1; i++) {
        putchar(text[i]);
        //cursor();
    }
    getc(stdin);
}

void cursor() {
    printf("█");
    // keystroke sound
    // wait 250ms
    putchar('\b');
}

void delay(long milliseconds) {
    for (register unsigned long long i = 0; i < ULLONG_MAX; i++);
}
