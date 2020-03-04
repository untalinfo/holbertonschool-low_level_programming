#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - contatenates two strings
 * @s1: pointer to firts string
 * @s2: pointer to second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int a = 0, b = 0, m = 0;
	char *p;
 
	if ((s1 == NULL) && (s2 == NULL))
	{
		*s1 = ' ';
		*s2 = ' ';
	}
	if (s1 == NULL)
		*s1 = ' ';
	if (s2 == NULL)
		*s2 = ' ';

	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	j++;

	p = malloc((sizeof(char) * i + sizeof(char) * j));
	if (p != NULL)
	{
	for (; a <= i; a++)
	{
		*(p + a) = *(s1 + a);
	}
	for (b = i; b < (j + i + 1); b++)
	{
		*(p + b) = *(s2 + m);
		m++;
	}
	}
	else
		return (NULL);
	return (p);
}
