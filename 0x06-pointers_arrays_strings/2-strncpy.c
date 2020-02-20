#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest:
 * @src:
 * @n:
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lf;

	for (lf = 0; lf < n && src[lf] != '\0'; lf++)
		dest[lf] = src[lf];
	for (; lf < n; lf++)
		dest[lf] = '\0';
	return (dest);
}
