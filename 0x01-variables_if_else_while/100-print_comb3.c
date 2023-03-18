# include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (succesd)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++) 
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num1 != num1 && num1 != num2)
			{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
