#include "type.h"

extern char * PROMPT;

void type(const char * text) {
    register short length = strlen(text);
    printf("%s %s", PROMPT, RESET);
    for (register short i = 0; i < length - 1; i++) {
        putchar(text[i]);
        cursor();
    }
    getc(stdin);
}

void cursor() {
    fflush(stdout);
    // keystroke sound
    sound();
    // wait 50ms
    delay(time_delay);
}

void delay(long milliseconds) {
    register long ms = milliseconds * (CLOCKS_PER_SEC / 1000);
    clock_t start, current;
    current = start = clock();
    while ((current - start) < ms) {
        current = clock();
    }
}

void sound() {
    // plays keystroke sound
}
