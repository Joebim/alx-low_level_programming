#include "main.h"

/**
 * print_last_digit - print last digit
 * Return: n as last dight
 */

int print_last_digit(int num)
{
	int last_digit = abs(num) % 10; /* get the absolute value and modulo 10 */
	int n = last_digit + '0'; /* convert to ASCII code */
	return n;
}
