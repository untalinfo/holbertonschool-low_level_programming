#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the memory area dest
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, cont = 0, sizeN = 0;

	if (needle[j] != '\0')
		sizeN++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		cont = 0;
		for (; j < sizeN; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				cont++;
			}
			else
				break;
		}
		if (cont == sizeN)
			return (haystack + i);
	}
	return (NULL);
}
