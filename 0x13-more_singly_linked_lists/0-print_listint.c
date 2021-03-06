#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h : head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
