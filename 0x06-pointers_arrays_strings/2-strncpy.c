#include  "main.h"
#include <string.h>

/**
 * *_strncpy - copy the string pointed to by src
 * @dest: destination
 * @src: Source text string
 * @n: number of bytes to use
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
