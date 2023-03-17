#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main head function
 * initialize varible n
 * last_n - function to get last character
 * if else condition
 * Return: return 0 if code success
 */

int last_n(int number)
        {                                                                 int reminder;

        reminder = number % 10;                                                   return (reminder);                                        }

int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ln = last_n(n);

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ln);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ln);
	} else if ((n < 6) && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ln);
	}
	return (0);
}
