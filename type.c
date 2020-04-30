#include "type.h"

extern char * PROMPT;

void type(const char * text) {
    register uint16_t length = strlen(text);
    printf("%s %s", PROMPT, RESET);
    for (register uint16_t i = 0; i < length - 1; i++) {
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

void delay(uint32_t milliseconds) {
    register uint32_t ms = milliseconds * (CLOCKS_PER_SEC / 1000);
    clock_t start, current;
    current = start = clock();
    while ((current - start) < ms) {
        current = clock();
    }
}

void sound() {
    // plays keystroke sound
}
