#include "main.h"

/**
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i;

	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
