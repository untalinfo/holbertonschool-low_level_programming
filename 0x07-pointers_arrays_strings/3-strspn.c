#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: pointer to the memory area dest
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int sw, i, j = 0;

	for (; s[j] != '\0'; j++)
	{
		sw = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				cont++;
				sw = 1;
			}
		}
		if (sw == 0)
			break;
	}
	return (cont);
}
