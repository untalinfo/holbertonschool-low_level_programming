#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to list
 * @n: int to store node
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	new->next = NULL;
	new->n = n;
	return (new);
}
