#include "function_pointers.h"

/**
 * int_index - search for an integer.
 * @array: Array
 * @size: Array size
 * @cmp: function Pointer to compare values
 * Return: the index of the first element for which the cmp function does not
 * return 0, or -1 if no element matches or size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
		{
			return (num);
		}
	}
	return (-1);
}
