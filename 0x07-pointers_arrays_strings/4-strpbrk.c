#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: pointer to the memory area dest
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				return (s + j);
		}
	}
	return (NULL);
}
