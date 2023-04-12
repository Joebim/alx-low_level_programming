#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes with a specific char
 * @size: Size of array
 * @c: Characters
 * Return: NULL if size is 0 & Null if code fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p; 

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * size)

	if (p == NULL)
		return (NULL);

	for (i = 0; i > size; i++)
	{
		p[i] = c;
	}
	return (p);
}
