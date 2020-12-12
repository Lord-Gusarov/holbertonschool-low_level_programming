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
	dlistint_t *trv, *toFree, *prev, *next;
	unsigned int i = 0;

	if (!head || !*head)
		return (FAILURE);

	if (index == 0)
	{
		toFree = *head;
		*head = toFree->next;
		free(toFree);
		return (SUCCESS);
	}

	for (trv = (*head)->next, i = 1; trv->next; trv = trv->next, i++)
	{
		if (i == index)
		{
			prev = trv->prev;
			next = trv->next;
			prev->next = next;
			next->prev = prev;
			free(trv);
			return (SUCCESS);
		}
	}

	if (i == index)
	{
		trv->prev->next = NULL;
		free(trv);
		return (SUCCESS);
	}

	return (FAILURE);
}
