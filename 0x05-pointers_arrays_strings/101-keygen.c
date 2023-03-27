#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[16];
    int i;

    srand(time(NULL));

    for (i = 0; i < 15; i++)
    {
        password[i] = rand() % ('~' - '!' + 1) + '!';
    }
    password[i] = '\0';

    printf("%s\n", password);
    return (0);
}
