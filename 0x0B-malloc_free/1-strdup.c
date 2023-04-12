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
	int length;

	char *p;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	p = malloc(sizeof(*str) * (length + 1));

	if (p == NULL)
		return (NULL);

	strcpy(p, str);
	return (strdup(p));
}
