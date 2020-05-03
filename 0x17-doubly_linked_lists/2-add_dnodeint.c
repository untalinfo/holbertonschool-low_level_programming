#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer to list
 * @n: int to store node
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	*head = new;
	return (*head);
}
