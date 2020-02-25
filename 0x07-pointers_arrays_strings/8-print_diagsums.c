#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *@a: pointer to an array of arrays
 *@size: size of square matrix
 *Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum = sum + (a[i * (size + 1)]);
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum = sum + (a[(i + 1) * (size - 1)]);
	printf("%d\n", sum);
}
