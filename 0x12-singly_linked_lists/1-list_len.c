#include "lists.h"
/**
 * list_len - determines the number of elements
 * in a linked list_t list
 * @h: head of list of node fron which to start counting
 * Return: count of linked elements
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
