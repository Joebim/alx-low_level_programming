#include "main.h"

/**
 * print_sign - Print sign of numbers
 * @n: Character to be inputed
 * Return: 1 if n is higher than 0, 0 if 0 and -1 if n is lesser than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
