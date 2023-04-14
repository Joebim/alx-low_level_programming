#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - allocates memory using malloc.
 * @s1: first string
 * @s2: second string
 * Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *p;

        unsigned int l1 = 0, l2 = 0;

        if (s1 != NULL)
        {
                l1 = strlen(s1);
        }
        if (s2 != NULL)
        {
                l2 = strlen(s2);
        }

        if (n < l2)
        {
                l2 = n;
        }

        p = malloc(sizeof(char) * (l1 + l2 + 1));

        if (p == NULL)
        {
                return (NULL);
        }

        if (s1 != NULL)
	{
		memcpy(p, s1, l1);
	}

	if (s2 != NULL)
	{
		if (n > l2)
		{
			n = l2;
		}
		memcpy(p + l1, s2, n);
	}

        p[l1 + n] = '\0';
        return (p);
}
