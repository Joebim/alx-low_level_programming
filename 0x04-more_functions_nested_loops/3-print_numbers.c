#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 */

void print_numbers(void)
{
	char num; /*Initialize number variable*/

	num = 0;

	while (num <= 9) /*loop to print numbers*/
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
