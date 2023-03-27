#include "main.h"

/**
 * print_rev - Print a given string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i, j;
	int last_num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		last_num++	
	}

	for (j = last_num; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n')
}
