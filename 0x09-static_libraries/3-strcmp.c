#include "holberton.h"

/**
 * _strcmp - function that compares tow strings.
 * @s1: pointer of the array s1
 * @s2: pointer of the array s2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
