#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a listint_t linked list.
 * @head: the list
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
