#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: current head of the list
 * @idx: position in which to insert
 * @n: value for the new node
 * Return: address pf the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head != NULL)
	{
		if (*head == NULL)
		{
			if (idx == 0)
			{
				new->next = NULL;
				*head = new;
				return (new);
			}
		}
		else
		{
			traverse = *head;
			while (traverse != NULL && i < idx - 1)
			{
				traverse = traverse->next;
				i++;
			}
			if (i == 0 || i == idx - 1)
			{
				new->next = traverse->next;
				traverse->next = new;
				return (new);
			}
		}
	}

	return (NULL);
}
