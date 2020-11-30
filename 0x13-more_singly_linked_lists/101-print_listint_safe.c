include "lists.h"

/**
 * print_listint_safe - safelys prints a linked list indicating if there is
 * a loop in the linked list but without getting trapped.
 * @head: current head of the list
 *
 * Return: amount of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff_addr = 0;
	size_t size = 0;

	while (head)
	{
		size++;
		diff_addr = head - head->next;

		printf("[%p] %d\n", (void *)head, head->n);

		if (diff_addr > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
	}

	return (size);
}

