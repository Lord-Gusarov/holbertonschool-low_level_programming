#include "lists.h"
#define SUCCESS 1
#define FAILURE (-1)
/**
 * delete_nodeint_at_index - deletes the node at the specifoied index
 * @head: current head of the linked list
 * @index: idex of the desired node to remove
 * Return: 1 if i succeeded. -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *traverse, *tmp;

	if (head == NULL || *head == NULL)
		return (FAILURE);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (SUCCESS);
	}

	traverse = *head;
	while (traverse != NULL)
	{
		if (i == index - 1)
		{
			if (traverse->next == NULL)
				return (FAILURE);
			tmp = (traverse->next)->next;
			free(traverse->next);
			traverse->next = tmp;
		}
		traverse = traverse->next;
		i++;
	}

	return (SUCCESS);
}
