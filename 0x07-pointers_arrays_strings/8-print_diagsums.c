#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a sqr matrix of int
 * @a: pointer to array matrix
 * @sizs: integer
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i*size + i]; /*add diagonal element*/
		sum2 += a[i*size + size-i-1]; /*add opposite diagonal element*/
	}
	printf("%d, %d\n", sum1, sum2);
}
