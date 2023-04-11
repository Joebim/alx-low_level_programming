#include "main.h"
#include <stdio.h>
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
		putchar(argv[0][i]);
	}
	putchar('\n')
	return (0);
}
