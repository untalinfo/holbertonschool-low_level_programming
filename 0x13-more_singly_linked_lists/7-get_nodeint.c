#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to list
 * @index: index node
 * Return: if node doesn't exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmpnode;

	i = 0;
	tmpnode = head;
	while (i < index && tmpnode != NULL)
	{
		tmpnode = tmpnode->next;
		i++;
	}
	if (i == index)
		return (tmpnode);
	else
		return (NULL);
}
