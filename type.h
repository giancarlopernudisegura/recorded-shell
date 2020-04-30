#ifndef _TYPE_H_
#define _TYPE_H_
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>
#include <time.h>
#include "color.h"

extern uint32_t time_delay;

void type(const char * text);

void cursor();

void delay(uint32_t milliseconds);

void sound();

#endif
