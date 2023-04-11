#include "main.h"

/**
 * main - print programme name
 * @argc: number of array pointer argv
 * @argv: array pointer
 * Return: 0 when success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int num, i;

	num = 0;

	for (i = 0, i < argc; i++)
	{
		num++;
	}
	num--;

	_putchar(num + '0');
	_putchar('\n');
	return (0);
}
