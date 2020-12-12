#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h:pointer to pointer to pointer of head of list
 * @idx: position of the desired node
 * @n: value for the new node
 *
 * Return: adress of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trv, *previous, *new;
	unsigned int i = 1;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (trv = *h; trv != NULL; i++)
	{
		/*If trv becomes NULL, trv->next == SEG FAULT, var 'previous' avoids that*/
		previous = trv;
		trv = trv->next;
		if (i == idx)
		{
			new->next = trv;
			new->prev = previous;
			previous->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
