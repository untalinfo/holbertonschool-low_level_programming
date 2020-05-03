#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the list
 * @index:  index of the node, starting at 0
 * Return: The nth node of a listint_t linked list. NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}
