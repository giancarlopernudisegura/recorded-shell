#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

FILE * readFile(const char * filename);

char * readLine(FILE * stream);

void trim(char * str);

_Bool isComment(char * str);

#endif
