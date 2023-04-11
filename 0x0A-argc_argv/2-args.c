#include "main.h"

/**
 * main - print programme name
 * @argc: number of array pointer argv
 * @argv: array pointer
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int c, v;

	for (c = 0; c < argc; c++)
	{
		for (v = 0; argv[c][v]; v++)
		{
			_putchar(argv[c][v]);
		}
		_putchar('\n');
	}
	return (0);
}
