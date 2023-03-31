#include "main.h"
#include <string.h>

/**
 * *_strncat - concant strings
 * @dest: Destination output variable
 * @src: Source string
 * @n: Numbers of bytes to be used
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
