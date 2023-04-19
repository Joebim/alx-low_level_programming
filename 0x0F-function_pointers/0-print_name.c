#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: string name
 * @f: Function pointer
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
