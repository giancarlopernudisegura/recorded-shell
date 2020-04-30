#ifndef _CONFIG_H_
#define _CONFIG_H_
#include <stdint.h>

uint32_t time_delay = 50;

// set to 0 for no sound
uint8_t sound_volume = 100;

char * PROMPT = "\x1B[33muser\x1B[31m@\x1B[34mhost \x1B[32m$";

#endif
