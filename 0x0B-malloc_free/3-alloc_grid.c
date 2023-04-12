#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: 
 * @height:
 * Return:
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **) malloc(sizeof(int) * (height));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)calloc(width, sizeof(int));
		if (p[1] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p);
				return NULL;
			}
		}
	}
	return (p);
}
