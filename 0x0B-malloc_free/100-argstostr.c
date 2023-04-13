#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
        int i, j, k = 0, length = 0;
        char *p;

        if (ac == 0 || av == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                {
                        length++;
                }
                length++;
        }

        p = malloc(sizeof(char) * (length + 1));

        if (p == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++, k++)
                {
                        p[k] = av[i][j];
                }
                p[k++] = '\n';
        }

        p[k] = '\0';

        return (p);
}
