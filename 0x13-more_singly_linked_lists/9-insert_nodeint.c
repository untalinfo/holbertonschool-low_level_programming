#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a
 * new node at a given position
 * @head: pointer to list
 * @idx: index where the new node should be added.
 * @n: int to store in node
 * Return: Adddress of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *tmpnode, *aux;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tmpnode = *head;
	if (idx == 0)
	{
		node->next = tmpnode;
		*head = node;
		return (node);
	}
	while (tmpnode)
	{
		if (i == (idx - 1))
		{
			aux = tmpnode->next;
			node->next = aux;
			tmpnode->next = node;
			return (node);
		}
		i++;
		tmpnode = tmpnode->next;
	}
	return (NULL);
}

