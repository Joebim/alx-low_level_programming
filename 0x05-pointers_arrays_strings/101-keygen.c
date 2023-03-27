#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme program
 *
 * Return: Always 0
 */

int main(void)
{
        int password[100];
        int i, sum, n;

        srand(time(0)); /* initialize random seed */

        /* generate random numbers and calculate sum */
        sum = 0;
        for (i = 0; i < 100; i++)
        {
                password[i] = rand() % 78 + 48;
                sum += password[i];
                putchar(password[i]);
        }

        /* add checksum to password */
        n = (sum - 2772) % 62;
        if (n < 0)
                n += 62;
        password[100 - 1] = n + 48;
        putchar(n + 48);

        return (0);
}
