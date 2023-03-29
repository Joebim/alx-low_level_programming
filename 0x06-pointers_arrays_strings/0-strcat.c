#include "main.h"
#include <string.h>

/**
 * *_strncat - concant strings
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
