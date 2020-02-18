#include "holberton.h"

/**
 * swap_int - funtion that swaps the values of tow integers.
 *
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
