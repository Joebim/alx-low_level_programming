#include "main.h"
#include <string.h>

/**
 * *_strcat - concant strings
 * @dest: destination variable
 * @src: source srting
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
