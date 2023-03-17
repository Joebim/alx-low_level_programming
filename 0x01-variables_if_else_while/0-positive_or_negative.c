#include <stdlib.h>
#include <time.h>

/*
 * main - main head function init
 * int - intialize variable
 * if else condition
 * return: returns 0 after success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		return ("is positive");
	} else if (n < 0)
	{
		return ("is negative");
	} else if (n == 0)
	{
		return ("is zero");
	}
	return (0);
}
