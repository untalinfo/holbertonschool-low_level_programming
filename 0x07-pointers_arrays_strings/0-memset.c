#include "holberton.h"

/**
 * _memset - that fills memory with a canstant byte
 * @s: pointer to the memory area
 * @b: constant value to replace
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	n--;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
