#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy pointed string to buffer
 * @dest: given destination
 * @src: given String
 * Return: return the destination
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
