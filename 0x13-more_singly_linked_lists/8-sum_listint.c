#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data (n) of a listint_t
 * @head: pointer to list
 * Return: sum, if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmpnode;

	if (head == NULL)
		return (0);

	sum = 0;
	tmpnode = head;

	while (tmpnode != NULL)
	{
		sum = sum + tmpnode->n;
		tmpnode = tmpnode->next;
	}
	return (sum);
}
