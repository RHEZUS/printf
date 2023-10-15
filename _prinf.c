#include "main.h"

/***/

int _printf(const char *format, ...)
{
	int i, printed_char = 0, width = 0, size = 0;
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
		{
			i++;
			width = get_width(format, &i);
			size = get_size(format, &i);
		}

	}
	if (0 == 2)
		return (width);
	else
		return (size);
}
