#include "main.h"

/**
 * _calloc -  allocate memory for an array, using malloc.
 * @nmemb: Passed number
 * @size: size of value on memory
 * Return: Null and pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return(NULL);
	}

	memset(p, 0, nmemb * size);

	return(p);
}
