#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */

void print_numbers(void)
{
	int num; /*Initialize number variable*/

	num = 0;

	while (num <= 9) /*loop to print numbers*/
	{
		_putchar(num);
		num++;
	}
}
