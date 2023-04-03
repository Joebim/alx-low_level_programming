#include "main.h"
#include <string.h>

/**
 * *_memset -  fill memory with a constant byte.
 * @s: array of characeter
 * @b: address
 * @n: number
 * Return: return memset function and parameter
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
