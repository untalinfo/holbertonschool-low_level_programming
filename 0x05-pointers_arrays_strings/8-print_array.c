#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function that prints n elements os an array
 * of integers.
 * @a: is a pointer to array
 * @n: is the number of elements of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
