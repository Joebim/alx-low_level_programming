#include "main.h"
#include <math.h>

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: regular number
 * @y: power
 * Return: the value of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (-1);
}
