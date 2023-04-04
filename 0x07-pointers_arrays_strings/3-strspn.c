#include "main.h"
#include <string.h>

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: string
 * @accept: string
 * Return: return output of function
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
