#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	int n = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}	
