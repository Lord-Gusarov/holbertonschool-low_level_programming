#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list, or node from whic to count forward
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		printf("%i\n", h->n);
		h = h->next;
	}

	return (cnt);
}
