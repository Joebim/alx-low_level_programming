#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // seed the random number generator
    srand(time(NULL));

    // generate 4 random lowercase letters
    char password[7];
    for (int i = 0; i < 4; i++) {
        password[i] = 'a' + (rand() % 26);
    }

    // generate 2 random digits
    for (int i = 4; i < 6; i++) {
        password[i] = '0' + (rand() % 10);
    }

    // add null terminator to the end of the string
    password[6] = '\0';

    printf("Random password: %s\n", password);

    return 0;
}
