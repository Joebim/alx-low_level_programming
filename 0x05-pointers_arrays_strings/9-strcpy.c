#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy pointed string to buffer
 * @dest: given destination
 * @src: given String
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
	int length = strlen(src)
	
	char *string = src[length + 1]

	strcpy(dest, string);
	return (0);
}
