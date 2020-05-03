#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a listint_t *list.
 * @head: pointer to firts node
 * @n: new data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		for (; tmp->next != NULL; tmp = tmp->next)
			;
		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
