#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: list
 * Return: reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *aux = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	while (*head)
	{
		aux = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = aux;
	}
	*head = tmp;
	return (*head);


}
