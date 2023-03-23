#include "main.h"
#include <stdio.h>

/**
 * print_line - print "_" to inputed times
 * @n: Inputed parameter
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	
	int num;

	for (num = 0; num < n; num++)
	{
		putchar('_');
	}
	putchar('\n');
}
