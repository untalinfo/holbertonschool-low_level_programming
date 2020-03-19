#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning a list
 * @head: pointer to head
 * @str: new string to make node for new head
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = (*head);
	*head = new;

	new->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
		i++;
	new->len = i;

	return (new);
}
