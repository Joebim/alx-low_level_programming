#include "main.h"

/**
 * print_line - print "_" to inputed times
 * @n: Inputed parameter
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		
			_putchar('_');
			_putchat('\n');
		}
		else
			_putchar('\n');
	
}
