#include "main.h"

/**
 * puts2 - print string character
 * @str: srting
 */

void puts2(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		_putchar(*s);
		if (*(s + 1) == '\0')
			break;
		s += 2;
	}
	_putchar('\n');
}
