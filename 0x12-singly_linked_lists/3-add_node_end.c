#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to head
 * @str: new string to make node for new head
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
	}
	else if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	new->next = NULL;
	new->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
		i++;
	new->len = i;

	return (new);
}
