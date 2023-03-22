#include "main.h"

/**
 * print_last_digit - print last digit
 * Return: n as last dight
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	int last_digit = n % 10; /* get the absolute value and modulo 10 */

	int num = last_digit + '0'; /* convert to ASCII code */

	return num;
}
