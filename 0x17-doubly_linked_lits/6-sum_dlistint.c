#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data(n) of a dlistint_t list
 * @head: head of the list
 *
 * Return: the sum, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
