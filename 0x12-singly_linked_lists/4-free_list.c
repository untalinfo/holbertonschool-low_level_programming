#include "lists.h"
/**
 * free_lists - function that frees a list_t list
 * head: pointer to firts node
 * 
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp, *buffer;

	tmp = head;
	if (head != NULL)
	{
		buffer = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = buffer;
	}
}
