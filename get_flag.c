#include "main.h"

/**
 * get_flag - Calculating all active flag
 * @format: string in which to print arr
 * @i: taking a parameter
 * Return: Flag
 */
int get_flag(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flag = 0;
	const char flag_ch[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flag_arr[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; flag_ch[j] != '\0'; j++)
<<<<<<< HEAD

=======
>>>>>>> creation: creation get_flag get_percision
			if (format[curr_i] == flag_ch[j])
			{
				flag = flag_arr[j];
				break;
			}

		if (flag_ch[j] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flag);
}

