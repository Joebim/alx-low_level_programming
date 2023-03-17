#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Alway 0 (success)
 */

int main(void)
{
	char *letters = "abcdefghijklmnopqrstuvwxyz\n"; /*Declare variable letters*/
	
	int i;

	for(; letters[i] != '\0'; i++) /*Loop between letters*/
	{
		putchar(letters[i]); /*Print string to standard output*/
	}
	return (0);
}
