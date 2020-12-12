#include "lists.h"
#define SUCCESS 1
#define FAILURE -1
/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * of a dlistint_t linked list
 * @head: pointer to pointer of the head of the list
 * @index: position of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trv, *previous, *next;
	unsigned int i = 1;

	if (!head || !*head)
		return (FAILURE);

	trv = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(trv);
		return (SUCCESS);
	}

	for (i = 1; trv->next; i++)
	{
		previous = trv;
		trv = trv->next;
		if (i == index)
		{
			next = trv->next;

			previous->next = next;
			if (next)
				next->prev = previous;
			free(trv);
			return (SUCCESS);
		}
	}

	return (FAILURE);
}
