#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a separator
 * @separator: pointer to the seperator
 * @n: number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i;

	va_start(input, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(input);
}
