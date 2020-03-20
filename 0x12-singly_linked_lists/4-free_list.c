#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to firts node
 *
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp, *buffer;

	tmp = head;
	while (head != NULL)
	{
		buffer = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = buffer;
	}
}
