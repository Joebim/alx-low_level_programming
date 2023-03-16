#include <stdio.h>

/**
 * main - The main function
 * Initializing variables c, i, li, lli, d
 * printf - function to print strings
 * sizeOf - Get size of type  
 * Return: Always 0 (Success)
 */

int main(void)
{
        char c;
        int i;
        long int li;
        long long int lli;
        float f;

        printf("Sice of a char: %c\n",(char)sizeof(c));
	printf("Size of an int: %i\n",(int)sizeof(i));
        printf("Size of a long int: %li\n",(long int)sizeof(li));
        printf("Size of a long long int: %lli\n",(long long int)sizeof(lli));
        printf("Size of a float: %f\n",(float)sizeof(f));	
	return (0);
}
