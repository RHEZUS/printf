#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
	int len;
	int len2;

	len = _printf("Let's%% try to printf a simple sentence%c\n", '.');
	len2 = printf("Let's%% try to printf a simple sentence%c\n", '.');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/*	_printf("Length:[%d, %i]\n", len, len);*/
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
=======
	printf(" %d\n", _printf("This is a %ld example with width."));
	printf("Waiting for your work\n");
	printf("Format 1: Width: %d, Precision: %d, Flag: %c\n", width1, precision1, flag1);
	printf("Format 2: Width: %d, Precision: %d, Flag: %c\n", width2, precision2, flag2);
	printf("Format 3: Width: %d, Precision: %d, Flag: %c\n", width3, precision3, flag3);
	printf("Format 4: Width: %d, Precision: %d, Flag: %c\n", width4, precision4, flag4);
	printf("Format 5: Width: %d, Precision: %d, Flag: %c\n", width5, precision5, flag5);
	return (0);
}
/*Collaborators: ludivin & Wolfgang */

>>>>>>> creation: creation get_flag get_percision
