#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to firts element of list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *aux;

	tmp = *head;
	while (tmp != NULL)
	{
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
	*head = NULL;
}
