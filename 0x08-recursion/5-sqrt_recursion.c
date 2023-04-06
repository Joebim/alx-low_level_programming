#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */

int helper(int n, int low, int high);

int _sqrt_recursion(int n)
{
	if (n < 0) /* error case */
	{
		return -1;
	}
	else if (n == 0 || n == 1) /* base case */
	{
		return n;
	}
	else /* recursive case */
	{
		return helper(n, 0, n);
	}
}

int helper(int n, int low, int high)
{
	int mid, sqr;

	if (low > high) /* error case */
	{
		return -1;
	}

	mid = (low + high) / 2;
	sqr = mid * mid;

	if (sqr == n) /* base case */
	{
		return mid;
	}
	else if (sqr < n) /* look for square root in upper half */
	{
		return helper(n, mid + 1, high);
	}
	else /* look for square root in lower half */
	{
		return helper(n, low, mid - 1);
	}
}
