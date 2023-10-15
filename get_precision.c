#include "main.h"
#include <stdio.h>
/**
 * get_precision - Calculating the precision
 * @format: string in which to print the arguments
<<<<<<< HEAD
 * @i: Pointer to the current format's data
 * @list: list of arguments
=======
 * @i: List of argument
>>>>>>> creation: creation get_flag get_percision
 * Return: Precision
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
<<<<<<< HEAD
		if (format[curr_i] >= '0' && format[curr_i] <= '9')
=======
		if (format[curr_i] >= 0 && format[curr_i] <= 9)
>>>>>>> creation: creation get_flag get_percision
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}
