#include "main.h"
#include <string.h>

/**
 *
 */

void _print_rev_recursion(char *s)
{
	int length;

	length = strlen(s)

	if (length == 0)
	{
		return;
	}
	_putchar(s[length])
	
	_print_rev_recursion(s[length - 1])
}
