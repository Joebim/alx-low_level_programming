#include "main.h"
#include <string.h>

/**
 * *_memcpy - copy given byte of memory from source to destination
 * @dest: dsetination
 * @src: source
 * @n: number of byted
 * Return: destiation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
