#include "main.h"

/**
 * puts2 - print string character
 * @str: srting
 */

void puts2(char *str)
{
	int s = 0;
	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s += 2;
	}
	_putchar('\n');
}
