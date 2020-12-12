#include "lists.h"

/**
 * dlistint_len - Count the number of elements in a linked dlistint_t list
 * @h: head of the list, or node form which to count forward
 *
 * Return: number of elmenents
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
