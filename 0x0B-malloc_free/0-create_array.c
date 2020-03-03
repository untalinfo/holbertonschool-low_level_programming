#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the size of the memory to print
 * @c: character inicial
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
