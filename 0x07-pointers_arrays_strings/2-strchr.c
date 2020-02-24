#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: character to be locate
 *
 * Return: pointer to the memory area dest
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
