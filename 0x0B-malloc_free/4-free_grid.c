#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Alloc Grid
 * @grid: width to alloc
 * @height: height to alloc
 *
 * Return: No Return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
