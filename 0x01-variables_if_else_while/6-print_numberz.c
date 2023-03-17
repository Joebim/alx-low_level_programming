#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'); /* convert num to character value */
	}
	putchar('\n');
	return (0);
}
