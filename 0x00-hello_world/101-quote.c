#include <unistd.h>
#include <string.h>

/**
 * main - main function entry point
 * char - message:array of strings
 * int - length: size of message string
 * Return: return 1 when code success
 */

int main(void)
{
	char string1[] = "and that piece of art is useful\"";

	char string2[] = " - Dora Korpar, 2015-10-19\n";

	strcat(string1, string2);

	int length = (sizeof(string1) - 1);

	write(2, string1, length);
	return (1);
}
