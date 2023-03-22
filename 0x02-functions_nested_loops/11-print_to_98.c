#include "main.h"
#include <stdio.h>

/**
 * print_digit - prints a single digit
 * @d: the digit to print
 *
 * Prints the digit @d to stdout using putchar().
 */
void print_digit(int d)
{
	putchar(d + '0');
}

/**
 * print_number - prints a number
 * @n: the number to print
 *
 * Prints the number @n to stdout digit by digit, using print_digit().
 * If @n is negative, prints a minus sign before the number.
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	print_digit(n % 10);
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start from
 *
 * Prints all natural numbers from @n to 98, separated by a comma and a space.
 * The numbers are printed in ascending if @n is less than or equal to 98,
 * and in descending order if @n is greater than 98.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			print_number(i);
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			print_number(i);
			putchar(',');
			putchar(' ');
		}
	}
	print_number(98);
	putchar('\n');
}
