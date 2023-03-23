#include "main.h"
#include <stdio.h>

/**
 * print_line - print "_" to inputed times
 * @n: Inputed parameter
 */

void print_line(int n)
{
	int i;

	if (n > 0) {
		for (i = 0; i < n; i++) {
			putchar('_');
		}
	}
	putchar('\n');
}
