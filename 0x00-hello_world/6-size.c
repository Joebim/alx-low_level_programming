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

	printf("Sice of a char: %c byte(s)\n",(char)sizeof(c));
	printf("Size of an int: %i byte(s)\n",(int)sizeof(i));
	printf("Size of a long int: %li byte(s)\n",(long int)sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n",(long long int)sizeof(lli));
	printf("Size of a float: %f byte(s)\n",(float)sizeof(f));	
	return (0);
}
