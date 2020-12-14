#include "lists.h"

/**
 * insert_dnodeint_at_index: inserts node at index
 * @h: node
 * @idx: index
 * @n: node data
 * Return: node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *node = NULL, *temp, *last;

	if (h == NULL)
		return (NULL);
	temp = *h;
	last = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = temp;
		node->prev = NULL;
		if (temp != NULL)
			temp->prev = node;
		*h = node;
		return (node);
	}
	while (temp != NULL)
	{
		last = temp;
		temp = temp->next;
		if (i == idx)
		{
			node->next = temp;
			node->prev = last;
			if (temp != NULL)
				temp->prev = node;
			last->next = node;
			return (node);
		}
		i++;
	}
	free(node);
	return (NULL);
}
