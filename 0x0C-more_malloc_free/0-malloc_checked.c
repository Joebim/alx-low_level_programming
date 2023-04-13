#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: value for malloc method
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (P == NULL)
	{
		exit (98);
	}
	return (p);
}
