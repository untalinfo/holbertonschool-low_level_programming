#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head of list
 * @index: index to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmpnode, *dltnode;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		dltnode = *head;
		*head = (*head)->next;
		free(dltnode);
		return (1);
	}
	i = 0;
	tmpnode = *head;
	while (i < index - 1 && tmpnode != NULL)
	{
		tmpnode = tmpnode->next;
		i++;
	}
	if (i != index - 1 || tmpnode->next == NULL)
		return (-1);
	dltnode = tmpnode->next;
	tmpnode->next = dltnode->next;
	free(dltnode);

	return (1);
}
