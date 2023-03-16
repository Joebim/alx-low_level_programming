#include <unistd.h>

/*
 * main - Entry point
 * char - message:array of strings
 * int - length: size of message string
 * return 1 when code success
 */

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = sizeof(string) - 1;

	write(2, string, length);
	return (1);
}
