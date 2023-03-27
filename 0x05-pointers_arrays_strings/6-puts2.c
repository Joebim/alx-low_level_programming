#include "main.h"

/**
 * puts2 - print string starting with first character
 * @str: String
 */

void puts2(char *str)
{
	int s = 0;
	while (str[s] != '\0')
	{
		putchar(str[s]);
		s += 2;
	}
	putchar('\n');
}
