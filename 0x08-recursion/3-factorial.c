#include "main.h"

/**
 * factorial - get the factorial of a given number
 * @n: the given number
 * Return: (-1) if less than 0, (1) if equals 0 or 1 and the recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
