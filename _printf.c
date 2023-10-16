#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int i, printed_chars = 0, width = 0, size = 0;
	int precision = 0, flags = 0, printed = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			/*write(1, &format[i], 1);*/
			printed_chars++;
			write(1, &format[i], 1);
		}
		else
		{
			flags = get_flag(format, &i);
			width = get_width(format, &i);
			precision = get_precision(format, &i, args);
			size = get_size(format, &i);

			i++;

			printed = print_handler(format, &i, args, flags, width, precision, size);

			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}

	}
	va_end(args);
	return (printed_chars);
}
