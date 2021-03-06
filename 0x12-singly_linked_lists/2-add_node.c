#include "lists.h"
/**
 * add_node - adds a new node at the beggining of a list_t list
 * @head: adress current head of the list, will be updated if new node
 * is succesfully added at the beginning of a list
 * @str: string to store in new node
 * Return: adress of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;

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

	new->next = *head;
	*head = new;
	return (new);
}
