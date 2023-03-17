#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letters;

	for (letters = a; letters < z; letters++) /*Loop through letters a to z*/
	{
		putchar(letters); /*print letters to standard output*/
	}

	for (letters = A; letters < Z; letters++) /*Loop through letters A to Z*/
	{
		putchar(letters); /*print letters to standard output*/
	}
	return (0);
}
