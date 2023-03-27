#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
        int i, len;
        char password[13];

        srand(time(0)); /* Seed random number generator with current time */

        /* Generate random password of length 12 */
        for (i = 0; i < 12; i++)
        {
                /* Generate random character in range '0'-'z' */
                password[i] = rand() % ('z' - '0' + 1) + '0';

                /* Skip non-alphanumeric characters */
                while ((password[i] < '0' || (password[i] > '9' && password[i] < 'A')
                       || (password[i] > 'Z' && password[i] < 'a') || password[i] > 'z')
                       && password[i] != '\0')
                {
                        password[i] = rand() % ('z' - '0' + 1) + '0';
                }
        }

        password[i] = '\0'; /* Add null terminator to string */

        printf("%s\n", password);

        return (0);
}
