#include "main.h"
#include <stdlib.h>

/**
 * is_num - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_num(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_number - prints an integer using putchar
 * @n: number to print
 */

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: number of array pointer argv
 * @argv: array pointer
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int sum = 0, c, v;

	if (argc < 2)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		for (v = 0; argv[c][v]; v++)
		{
			if (!is_num(argv[c][v]))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}
