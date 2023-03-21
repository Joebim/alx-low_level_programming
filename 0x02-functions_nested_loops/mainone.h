#ifndef MAINONE_H
#define MAINONE_H
#include <stdio.h>

void print_alphabet(void);

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

#endif /* MAINONE_H */
