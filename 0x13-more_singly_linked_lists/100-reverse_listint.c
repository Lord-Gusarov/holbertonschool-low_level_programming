#include "lists.h"

/**
 * reverse_listint- reverses a listint_t linked list
 * @head: current head of a list
 * Return: pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *help1, *help2;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	help1 = *head;
	help2 = help1->next;
	*head = help1->next;
	help1->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		help2->next = help1;
		help1 = help2;
		help2 = *head;
	}
	*head = help1;
	return (*head);
}
