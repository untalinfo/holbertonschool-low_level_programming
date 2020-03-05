#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimmun
 * @max: maximmun
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for(i = 0; i <= size; i++)
	{
		p[i] = min;
		min++;
	}
	return(p);
}
