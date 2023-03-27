#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _atoi - convert string to integer
 * @s: String parameter
 * Return: Return sign * result
 */

int _atoi(char *s)
{
	int sign = 1;

	int res = 0;

	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
	{
		return (sign == -1 ? INT_MIN : INT_MAX);
	}
		res = res * 10 + (s[i] - '0');
	}
		if (res != 0 && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
			break;
		i++;
	}

	return (sign * res);
}
