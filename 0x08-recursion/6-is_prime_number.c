#include "holberton.h"

int prime(int n, int x);
/**
 * is_prime_number - function that if is a prime number
 * @n:  number
 * Return: 1 if iteger is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime(n, 2));
	else
		return (0);
}
/**
 * prime - function that calculates if an integer is prime
 * @n: number
 * @x: value  number
 * Return: value
 */
int prime(int n, int x)
{
	if ((n % x == 0) && (n != x))
		return (0);
	else if ((n % x == 0) && (n == x))
		return (1);
	else
		return (prime(n, x + 1));
}

