#include "main.h"
/**
 * print_line - print a straight line
 * @n: input value
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int num;

		for (num = 0; num < n; num++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
