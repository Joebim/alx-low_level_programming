#include "main.h"
#include <string.h>

/**
 *
 */

void puts_half(char *str)
{
	int i;

	int length = strlen(str);

	for (i = (length - 1)  / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
