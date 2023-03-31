#include  "main.h"

/**
 * *_strncpy - copy the string pointed to by src to dest
 * @dest: Destination output variable
 * @src: Source string
 * @n: Number of bytes to be use
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
