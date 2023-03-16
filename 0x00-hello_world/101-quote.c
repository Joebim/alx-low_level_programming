#include <unistd.h>

/**
 * main - main function entry point
 * char - message:array of strings
 * int - length: size of message string
 * Return: return 1 when code success
 */

int main(void)
{
	char string[];

	string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int length = sizeof(string) - 1;

	write(2, string, length);
	return (1);
}
