#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: point from which to free everything
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}

}
