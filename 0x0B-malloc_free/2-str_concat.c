#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first srting
 * @s2: second string
 * Return: NULL if p is null and joined string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);

	p = (char*) malloc(l1 + l2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	memcpy(p, s1, l1);
	memcpy(p + l1, s2, l2);
	p[l1 + l2] = '\0';

	return(p);
}
