#include "main.h"

/***/

int _printf(const char *format, ...)
{
	int i, printed_char = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printed_char++;
			putchar(format[i]);
			/*write(1, &format[i], 1);*/
		}
		else
			i++;

	}
	return (printed_char);
}
