#include "main.h"

/**
 * square_root - Recursively finds the square root of a number
 *
 * @n: The number to find the square root of
 * @root: The current root being tested
 *
 * Return: The square root of @n, or -1 if @n does not have a natural sqr rt
 */

int square_root(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (square_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 *
 * Return: square root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}
