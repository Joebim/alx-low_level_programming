#include <stdio.h>

void printString(char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

void print_alphabet(void);
