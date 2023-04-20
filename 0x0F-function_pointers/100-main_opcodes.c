#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, i;

	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < n; i++)
	{
		if (1 == n - 1)
		{
			printf("", array[i]);
			break;
		}
	}
	return (0);
}
