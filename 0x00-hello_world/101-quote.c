#include <unistd.h>

/**
 * main - main function entry point
 * Return: return 1 when code success
 */

int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 54);
	return (1);
}
