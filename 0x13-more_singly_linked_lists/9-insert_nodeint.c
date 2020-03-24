#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a new node at a given position
 * @head: pointer to list
 * @idx: index where the new node should be added.
 * n: int to store in node
 * Return: Adddress of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmpnod, *new;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}

	sum = 0;
	tmpnode = head;

	while (tmpnode != NULL)
	{
		sum = sum + tmpnode->n;
		tmpnode = tmpnode->next;
	}
	return (sum);
}
