#include <stdio.h>

/**
 * main - Entry point of program
 * Return: Always 0 if code successful
 */

int main(void)
{
	int hex_num, hex_let;

	for (hex_num = 0; hex_num < 10; hex_num++)
	{
		putchar(hex_num + '0');
	}

	for (hex_let = 0; hex_let <= 6; hex_let++)
	{
		putchar(hex_let + 'a');
	}
	putchar('\n');
	return (0);
}
