#include "holberton.h"

/**
 * reverse_array - function that reverse the content of an string.
 * @s1: pointer of the array s1
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp = 0;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
