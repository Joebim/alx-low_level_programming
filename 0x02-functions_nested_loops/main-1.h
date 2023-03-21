#ifndef MYHEADER_H
#define MYHEADER_H
#include <stdio.h>

void print_alphabet(void)
{
	int n = "a";

	while(n <= "z")
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
}

#endif /* MYHEADER_H */
