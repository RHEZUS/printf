#include "main.h"

/***/


int get_width(const char *format, int *i)
{
	const char *ptr = format;
	int curr_i = *i;
	int width = 0;

	while (ptr[curr_i] != '\0' && (ptr[curr_i] >= '0' && ptr[curr_i] <= '9'))
	{
		width = width * 10 + (ptr[curr_i] - '0');
		curr_i++;
	}
	*i = curr_i - 1;
	return (width);
}

