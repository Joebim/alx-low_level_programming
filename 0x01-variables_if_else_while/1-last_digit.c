#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * last_n - Get the last digit of a number.
 *
 * @number: The number to get the last digit of.
 *
 * Return: The last digit of the number.
 */

int last_n(int number)
{
	int reminder; /* Declare variable reminder to store last value */

	reminder = number % 10; /* Get last digit of number */
	return (reminder);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int n; /* Declare variable n */
	int ln; /* Declare variable ln */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ln = last_n(n);

	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	} else if (ln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	} else if ((ln < 6) && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}
