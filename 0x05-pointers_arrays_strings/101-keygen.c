#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    char password[15];
    int i, sum, diff, rand_ascii;

    srand(time(NULL)); /* seed the random number generator */

    /* generate 14 random characters */
    for (i = 0; i < 14; i++)
    {
        /* generate a random ASCII value between 33 and 126 */
        rand_ascii = rand() % 94 + 33;
        password[i] = (char)rand_ascii;
    }

    /* calculate the sum and difference of the ASCII values */
    sum = password[0];
    for (i = 1; i < 14; i++)
        sum += password[i];
    diff = sum - 2772;

    /* set the last character to the difference */
    password[14] = (char)diff;

    /* print the password */
    printf("%s\n", password);

    return (0);
}
