#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 * Return: 0 (dummy value)
 */

int print_last_digit(int n)
{
    int last_digit;
    char c;

    if (n < 0)
    {
        if (n == INT_MIN)
        {
            c = '0' - (n % 10);
            n /= 10;
        }
        else
        {
            n = -n;
            c = '-';
        }
    }
    else
    {
        c = ' ';
    }

    last_digit = n % 10; /* get the last digit */

    c = last_digit + '0'; /* convert to ASCII code */

    _putchar(c); /* print the character */
    return last_digit;
}
