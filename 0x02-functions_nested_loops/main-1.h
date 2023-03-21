#ifndef MAIN-1_H
#define MAIN-1_H
#include <stdio.h>

void print_alphabet(void)
{
	char n = 'a';

	while(n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}

#endif /* MAIN-1_H */
