#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to firts element of list
 * Return: none
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
