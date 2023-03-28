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
        char password[84];
        int i = 0, add = 0, h1, h2;

        while (add < 2772)
        {
                password[i] = 33 + rand() % 94;
                add += password[i++];
        }

        password[i] = '\0';

        if (add != 2772)
        {
                h1 = (add - 2772) / 2;
                h2 = (add - 2772) / 2;

                if ((add - 2772) % 2 != 0)
                h1++;

                for (i = 0; password[i]; i++)
                {
                        if (password[i] >= (33 + h2))
                        {
                                password[1] -= h2;
                                break;
                        }
                }
        }
        printf("%s", password);
                return(0);
}
