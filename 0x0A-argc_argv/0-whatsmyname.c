#include "main.h"
#include <stdlib.h>

/**
 * main - print programme name
 * @argc: number of array pointer argv
 * @argv: array pointer
 * Return: 0 when success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for(i = 0; argv[0][i]; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n')
	return (0);
}
