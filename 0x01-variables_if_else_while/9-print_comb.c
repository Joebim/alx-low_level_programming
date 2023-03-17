#include <stdio.h>

/**
 * main - Entry point of the program
 * return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
