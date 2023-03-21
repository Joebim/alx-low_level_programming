#include "main.h"

/**
 * print_alphabet_x10 - function called from header
 * Return: null
 */

void print_alphabet_x10(void)
{
	char letter;
	int times;

	times = 0;

	while (times < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		times++;
	}
}
