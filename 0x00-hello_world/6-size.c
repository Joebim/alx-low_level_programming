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
        float d;

        printf("Sice of a char: %c\n",(char)sizeOf(c));
	printf("Size of an int: %i\n",(int)sizeOf(i));
        printf("Size of a long int: %li\n",(long int)sizeOf(li));
        printf("Size of a long long int: %lli\n",(long long int)sizeOf(lli));
        printf("Size of a float: %f\n",(float)sizeOf(f));

        return (0);
