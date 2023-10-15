#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* SIZES */
#define S_LONG 2
#define S_SHORT 1


struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

typedef struct fmt fmt_t;


int _printf(const char *format, ...);


/* Functions to handle specificities*/

int get_width(const char* format, int *i);
int get_size(const char *format, int *i);




int handle_print(const char *frmt, int flags, int width, int precision, int size);

#endif
