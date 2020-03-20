#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to firts node
 *
 * Return: none
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
