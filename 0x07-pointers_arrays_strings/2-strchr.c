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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
