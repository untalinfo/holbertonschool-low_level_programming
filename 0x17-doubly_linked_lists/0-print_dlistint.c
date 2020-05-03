#include "lists.h"

/**
 * print_dlistint - check the code for Holberton School students.
 * @h: pointer to head list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
