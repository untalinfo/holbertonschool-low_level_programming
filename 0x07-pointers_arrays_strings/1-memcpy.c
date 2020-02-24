#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer destination memory location
 * @src: source memory loc
 * @n: number of bytes
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
