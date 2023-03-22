#include "main.h"

/**
 *
 */

void print_to_98(int n)
{
	if (n < 0)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n > 0 && n > 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		_putchar(n + '0')
	}
}
