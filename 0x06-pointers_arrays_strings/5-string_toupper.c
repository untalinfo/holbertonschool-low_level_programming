#include "holberton.h"

/**
 * string_toupper - function that reverse the content of an string.
 * @a: pointer of the array
 * Return: 0
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
