#include "lists.h"
/**
 * add_node_end - adds a new node at the emd of a list_t list
 * @head: adress current head of the list
 * @str: string to store in new node
 * Return: adress of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;
	list_t *traverse = *head;

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		for (i = 0; str[i]; i++)
			;
		new->len = i;
	}

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (traverse->next != NULL)
			traverse = traverse->next;
		(traverse)->next = new;
	}

	return (new);
}
