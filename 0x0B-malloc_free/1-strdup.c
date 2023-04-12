#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to memory that includes string
 * @str: Given string
 * Return: NULL if str is null and strdup function
 */

char *_strdup(char *str)
{
	size_t length;

	char *str2;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	str2 = malloc(length + 1);

	if (str2 == NULL)
		return (NULL);

	memcpy(str2, str, length + 1);

	return (str2);
}
