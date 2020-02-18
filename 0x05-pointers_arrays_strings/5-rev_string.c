#include "holberton.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer of the string
 * Return: 0
 */
void rev_string(char *s)
{
	int t, l, i = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	l = l - 1;
	for (i = 0; i <= l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i];
		s[l - i] = t;
	}
}
