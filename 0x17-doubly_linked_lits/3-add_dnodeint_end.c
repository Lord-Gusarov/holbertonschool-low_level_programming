#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of list head
 * @n: value for the new node
 *
 * Return: adress of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *traverse;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;

	new->prev = traverse;
	traverse->next = new;

	return (new);
}
