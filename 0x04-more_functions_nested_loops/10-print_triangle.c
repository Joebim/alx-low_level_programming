#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using the # character
 *
 * @size: the size of the triangle to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	/* Check if size is less than or equal to 0 */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		/* Iterate through each row of the triangle */
		for (i = 1; i <= size; i++)
		{
			/* Print the appropriate number of # characters for the current row */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
