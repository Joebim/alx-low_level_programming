#include "function_pointers.h"

/**
 * array_iterator - execute func given as a param on each element of an array
 * @array: Array
 * @size: Array size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (num = 0; num < size; num++)
	{
		action(array[num]);
	}
}
