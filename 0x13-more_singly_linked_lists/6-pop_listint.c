#include "lists.h"

/**
 * pop_listint - pops/deletes the firs element of a listinf_t linked list
 * @head: current head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head)
	{
		if (*head)
		{
			tmp = (*head)->next;
			n = (*head)->n;
			free(*head);
			*head = tmp;
		}
	}
	return (n);
}
