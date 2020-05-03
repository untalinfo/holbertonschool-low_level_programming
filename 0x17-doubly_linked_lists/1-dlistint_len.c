#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 * @h: pointer to head list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}
