#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalize string
 * @str: String
 * Return: String
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || isspace(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
