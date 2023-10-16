#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */

typedef struct fmt fmt_t;


int _printf(const char *format, ...);


/* Functions to handle specificities*/

int get_width(const char *format, int *i);
int get_size(const char *format, int *i);
int get_flag(const char *format, int *i);
int get_precision(const char *format, int *i, va_list args);



int print_handler(const char *format, int *ind, va_list args,
int flags, int width, int precision, int size);


/* Funtions to print chars and strings */
int print_char(va_list types, int flags, int width, int precision, int size);
int print_string(va_list types, int flags, int width, int precision, int size);
int print_percent(va_list types, int flags, int width,
int precision, int size);




#endif
