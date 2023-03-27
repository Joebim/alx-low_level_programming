#include "main.h"

/**
 * _strlen - Get the length of a given string
 * @s: string character
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	char length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
