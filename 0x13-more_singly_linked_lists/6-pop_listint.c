#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t list.
 * @head: pointer to firts elemente of list
 * Return: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (i);
}
