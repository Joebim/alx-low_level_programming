#include "main.h"

/**
 * *leet - encode string in a number
 * @str: given string
 * Return: String
 */

char *leet(char *str)
{
	const char *leet_chars = "AEOTL";

	const char *leet_subs = "43071";

	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j] || str[i] == leet_chars[j] + 32)
			{
				str[i] = leet_subs[j];
				break;
			}
		}
	}
	return (str);
}
