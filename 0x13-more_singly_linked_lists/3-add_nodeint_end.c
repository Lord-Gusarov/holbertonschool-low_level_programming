#include "lists.h"

/**
 * add_nodeint_end - adds a new int at the end of the list
 * @head: current head of the list
 * @n: value for the new node
 * Return: address of the new head, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *traverse = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}

	return (new);
}
