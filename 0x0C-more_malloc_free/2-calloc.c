#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of memory spaces
 * @size: size of nmenb
 * Return: pointer to allocate spaces or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb <= 0)
		return (NULL);
	if (size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
		*(p + i) = 0;
	return (p);
}
