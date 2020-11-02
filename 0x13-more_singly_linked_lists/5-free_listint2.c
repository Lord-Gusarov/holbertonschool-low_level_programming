#include "lists.h"

/**
 * free_listint2 - frees a listint_t list SETTING THE HEAD TO NULL
 * @head: current head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp  != NULL)
		{
			tmp2 = tmp->next;
			free(tmp);
			tmp = tmp2;
		}
		*head = NULL;
	}
}
