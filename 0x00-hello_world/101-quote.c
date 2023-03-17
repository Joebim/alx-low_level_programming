#include <unistd.h>

/**
 * main - main function entry point
 * Return: return 1 when code success
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message, 59);
	return (1);
}
