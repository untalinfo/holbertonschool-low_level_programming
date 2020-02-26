#include "holberton.h"

/**
 * factorial - function that returns the factorial of a give number
 * @n: give number
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	} else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}

