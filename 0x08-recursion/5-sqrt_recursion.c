#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * @root: square root of n.
 *
 * Return: square root of n, or -1 if n does not have a natural square root.
 */

int square_root(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (square_root(n, root + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}
