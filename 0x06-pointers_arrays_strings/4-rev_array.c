#include "main.h"

/**
 * reverse_array - reverse array of strings
 * @a: given string array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
