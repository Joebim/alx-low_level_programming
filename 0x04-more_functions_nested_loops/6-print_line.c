#include "main.h"

/**
 * print_line - print "_" to inputed times
 * @n: Inputed parameter
 */

void print_line(int n)
{
	int num;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
