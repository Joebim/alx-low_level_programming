#include "main.h"
#include <stdio.h>

/**
 * print_line - print "_" to inputed times
 * @n: Inputed parameter
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num >= n; num++)
		{
			putchar('_');
		}
	}
	if (n <= 0)
	{
		putchar('\n');
	}
	putchar('\n');
}
