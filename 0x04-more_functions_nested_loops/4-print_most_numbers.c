#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print number from 0 t0 9 except 2 & 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++) /*loop to print numbers*/
	{
		if (n != '2' || n != '4') /*condition to exclude 2 & 4*/
		{
			putchar(n);
		}
	}
	putchar('\n');
}
