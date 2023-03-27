#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password that matches the hash in 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
    char password[15];
    int i, sum, diff, rand_num;

    srand(time(NULL));

    /* Generate random password */
    for (i = 0; i < 12; i++)
    {
        rand_num = rand() % 62;
        if (rand_num < 26)
            password[i] = 'a' + rand_num;
        else if (rand_num < 52)
            password[i] = 'A' + (rand_num - 26);
        else
            password[i] = '0' + (rand_num - 52);
    }

    /* Calculate expected hash */
    sum = password[0] + password[1] + password[2] + password[3] + password[4];
    diff = password[5] - password[6];
    printf("Hash: %d\n", sum ^ 0x3b);
    printf("Expected hash: %d\n", diff);

    /* Print password */
    password[12] = '\n';
    password[13] = '\0';
    printf("%s", password);

    return (0);
}
