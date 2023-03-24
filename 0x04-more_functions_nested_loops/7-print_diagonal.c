#include "main.h"

/**
 *
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
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
