#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated 
 * space in memory, which contains a copy of the string 
 * given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *p;
	
	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	for (; j < i; j++)
	{
		*(p + j) = *(str + j);
	}
	return (p);
}
