#include "main.h"

/**
 * *string_toupper - change string to uppercase
 * @*: String
 * Return: String
 */

char *string_toupper(char *)
{
	int i = 0;
	
	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
