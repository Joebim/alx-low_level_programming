#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print a loop of ten numbers from 1 to 14
 */

void more_numbers(void)
{
	int n, times;

	for (times = 0; times < 10; times++) /*loop of ten numbers*/
	{
		for (n = 0; n <= 14; n++) /*loop number from one to fourteen*/
		{
			if (times >= 10)
			{
				putchar(times / 10 + '0');
			}
			putchar(times % 10 + '0');
		}
	}
	putchar('\n');
}
