#include "lists.h"
/**
 * print_list - print all the elements of a list_t list
 * @h: the list to print
 *
 * Return: the number of node printed
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
