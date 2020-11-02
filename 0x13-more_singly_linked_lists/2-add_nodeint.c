#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a listint_t list
 * @head: contains the adress of the pointer to the head of the list
 * @n: int value for the new node an head of list
 * Return: the adress of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;
	return (new);

}
