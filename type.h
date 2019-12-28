#ifndef _TYPE_H_
#define _TYPE_H_
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <time.h>
//#include "config.h"
#include "color.h"

extern long time_delay;

void type(const char * text);

void cursor();

void delay(long milliseconds);

void sound();

#endif
