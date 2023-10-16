#include "main.h"

/***/


int print_handler(const char *fmt, int *ind, va_list args,
int flags, int width, int precision, int size)
{

	int i, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		/*{'i', print_int}, {'d', print_int}, {'b', print_binary},*/
		/*{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexad    ecimal},*/
		/*{'X', print_hexa_upper}, {'p', print_pointer},*/
		/*{'S', print_non_printable},*/
		/*{'r', print_reverse}, {'R', print_rot13string}, */
		{'\0', NULL}
	};

	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(args, flags, width, precision, size));
	}

	return (printed_chars);
}
