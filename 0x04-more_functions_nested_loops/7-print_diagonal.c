#include "main.h"

/**
 * print_diagonal - print characters diagonally
 * @n: parameter for print
 */

void print_diagonal(int n)
{
	int t, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			for (l = 0; l < t; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
