#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Alloc Grid
 * @width: width to alloc
 * @height: height to alloc
 *
 * Return: Grid Allocated
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int **p;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
				free(p[i--]);
			free(p);
			return (0);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			p[j][k] = 0;
	}
	return (p);
}
