#include "main.h"
#include <string.h>

/**
 * puts_half - print half of given string
 * @str: String
 */

void puts_half(char *str)
{
	int i;

	int length = strlen(str);

	for (i = (length - 1)  / 2 + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
