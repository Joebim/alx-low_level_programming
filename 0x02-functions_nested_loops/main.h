#ifndef MYHEADER_H
#define MYHEADER_H
#include <stdio.h>

void printString(char str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

#endif /* MYHEADER_H */
