#include "holberton.h"

/**
 * rot13 -encodes a string using rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (alpha[j] == s[i])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}

