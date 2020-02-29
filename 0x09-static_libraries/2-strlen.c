#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: is the pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
