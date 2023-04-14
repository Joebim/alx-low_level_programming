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

        unsigned int l1, l2;

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }

        l1 = strlen(s1);
        l2 = strlen(s2);
        if (n >= l2)
        {
                n = l2;
        }
        p = malloc(sizeof(char) * (1 + n + 1));

        if (p == NULL)
        {
                return (NULL);
        }
        memcpy(p, s1, l1);
        memcpy(p + l1, s2, n);
        p[l1 + n] = '\0';
        return (p);
}
