#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed;
 *
 * Return: width.
 */

int get_width(const char *format, int *i)
{
	const char *ptr = format;
	int curr_i = *i + 1;
	int width = 0;

	while (ptr[curr_i] != '\0' && (ptr[curr_i] >= '0' && ptr[curr_i] <= '9'))
	{
		width = width * 10 + (ptr[curr_i] - '0');
		curr_i++;
	}
	*i = curr_i - 1;
	return (width);
}

