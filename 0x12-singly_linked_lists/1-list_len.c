#include "lists.h"
/**
 * list_len - print all the elements of a list_t list
 * @h: the list to print
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
