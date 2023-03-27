#include "main.h"
#include <stdio.h>

/**
 * print_array - print an arry to a given number
 * @a: Array to be printed
 * @n: number of times to print array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		printf(" ,");
	}
	printf("\n");
}
