#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Check for numbers
 * @c: parameter to be checked
 * Return: 1 when its a number 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	} else
		return (0);
}
