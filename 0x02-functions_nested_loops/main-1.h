#ifndef ALPHABET_H
#define ALPHABET_H
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

#endif /* MYALPHABET_H */
