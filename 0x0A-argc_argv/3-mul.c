#include "main.h"
#include <stdlib.h>

/**
 * main - print programme name
 * @argc: number of array pointer argv
 * @argv: array pointer
 * Return: 1 when success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result, i;

	if (argc != 3) {
		for (i = 0; "Error\n"[i]; i++)
			putchar("Error\n"[i]);
		return (1);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	result = num1 * num2;

	if (result == 0) {
		putchar('0');
	} else {
		if (result < 0) {
			putchar('-');
			result = -result;
		}

		for (i = 1000000000; i > 0; i /= 10) {
			if (result / i != 0 || i == 1)
			{
				putchar(result / i + '0');
			}
			result = result % i;
		}
	}

	putchar('\n');
	return (0);
}
