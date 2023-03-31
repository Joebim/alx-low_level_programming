#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - capitalize string
 * @str: String
 * Return: String
 */

char *cap_string(char *str)
{
	const char *separators = " \t\n,;.!?\"(){}";

	int i = 0;

	while (str[i])
	{
		if (i == 0 || strchr(separators, str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
