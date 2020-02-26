#include "holberton.h"

int sqrt2(int n, int x);
/**
 * _sqrt_recursion - function that returns the value natual square
 * root of a number.
 * @n:  number
 * Return: valeu square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 0));
}
/**
 * sqrt2- function that returns the value natual square
 * @n: number
 * @x: value  number
 * Return: valeu square root
 */
int sqrt2(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt2(n, x + 1));
}

