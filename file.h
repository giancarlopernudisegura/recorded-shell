#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

FILE * readFile(const char * filename);

char * readLine(FILE * stream);

#endif
