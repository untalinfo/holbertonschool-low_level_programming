#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: pointer of the array
 * Return: 0
 */
char *cap_string(char *a)
{
	int i, j;
	char b[] = {" \t\n,;.\"!?(){}"};

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 32;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if ((a[i] == b[j]) && (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
				a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
