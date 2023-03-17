#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main head function initialize
 * int - intialize variable
 * if else condition
 * Return: Always 0 after success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
