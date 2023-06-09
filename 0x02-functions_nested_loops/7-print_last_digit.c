#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 * Return: 0 (dummy value)
 */

int print_last_digit(int n)
{
	int last_digit;

	/* handle special case for INT_MIN */
	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
		}

		last_digit = n % 10; /* get the absolute value and modulo 10 */

		/* handle letters and convert to ASCII code */
		if (n < 0 || n > 9)
		{
			n %= 10;
		}
	}

	_putchar(last_digit + '0'); /* convert to ASCII code */
	return (last_digit);
}
