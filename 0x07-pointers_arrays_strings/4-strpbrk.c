#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the string of any of the bytes
 * @s: string
 * @accept: string
 * Return: output of function
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
