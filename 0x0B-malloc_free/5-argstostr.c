#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates arguments of a program.
 * @ac: argument count
 * @av: argument values
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = j = len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	p = (char *)malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, bufferlen++)
			p[bufferlen] = av[i][j];
		p[bufferlen] = '\n';
		bufferlen++;
	}
	p[bufferlen] = '\0';
	return (p);
}
