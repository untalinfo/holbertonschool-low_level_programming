#include "holberton.h"

/**
 * leet -encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
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

