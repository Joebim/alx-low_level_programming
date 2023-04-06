#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: the string to print in reverse
 */

void _print_rev_recursion(char *s)
{
	/* Base case: empty string */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive call with the rest of the string */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	putchar(*s);
}
