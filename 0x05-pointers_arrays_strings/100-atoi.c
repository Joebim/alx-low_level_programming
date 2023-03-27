#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert string to integer
 * @s: String parameter
 * Return: Return sign * result
 */

int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');

		if (result * sign > INT_MAX)
                                return INT_MAX;
                        else if (result * sign < INT_MIN)
                                return INT_MIN;

		if (result != 0 && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
			break;
		i++;
}
	return (sign * result);
}
