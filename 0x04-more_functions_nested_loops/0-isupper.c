#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for upper case letters
 * Return: 1 when its uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
