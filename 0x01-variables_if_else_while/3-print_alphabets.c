#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *letters_l = "abcdefghijklmnopqrstuvwxyz";

	char *letters_u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int l = 0;

	for (; letters_l[l] != '\0'; l++) /*Loop through letters a to z*/
	{
		putchar(letters_l[l]); /*print letters to standard output*/
	}

	int u = 0;

	for (; letters_u[u] != '\0'; u++) /*Loop through letters A to Z*/
	{
		putchar(letters_u[u]); /*print letters to standard output*/
	}

	putchar('\n'); /* Print a newline character */
	return (0);
}
