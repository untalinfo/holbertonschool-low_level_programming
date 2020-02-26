#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}

