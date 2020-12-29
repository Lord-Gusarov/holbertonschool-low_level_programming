#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}