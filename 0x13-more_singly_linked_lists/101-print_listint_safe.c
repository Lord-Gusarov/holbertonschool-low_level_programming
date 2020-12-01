#include "lists.h"

/**
 * print_listint_safe - safelys prints a linked list indicating if there is
 * a loop in the linked list but without getting trapped.
 * @head: current head of the list
 *
 * Return: amount of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0, i = 0;

	if (!head)
		return (0);

	size = safe_list_len(head);
	while (i < size)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	if (head)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (size);
}

/**
 * safe_list_len - calculates the lenght of a listint_t list
 * which may conain a loop
 * @h: head of list
 * Return: amount of nodes
 */
size_t safe_list_len(const listint_t *h)
{
	size_t i = 0, size = 0;
	unsigned int adrs_size = 100, m_size = sizeof(void *) * adrs_size;
	const listint_t **adrs = malloc(m_size);

	if (adrs == NULL)
		exit(98);

	while (h)
	{
		for (i = 0; i < size; i++)
			if (adrs[i] == h)
			{
				free(adrs);
				return (size);
			}
		if (size == adrs_size)
		{
			adrs = _realloc(adrs, m_size, m_size * 2);
			if (!adrs)
				exit(98);
			adrs_size *= 2, m_size *= 2;
		}
		adrs[size] = h;
		size++;
		h = h->next;
	}

	free(adrs);
	return (size);
}


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory block to reallocate
 * @old_size: size in bytes of current memory block
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new memory block, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m, *c_ptr;
	unsigned int limit;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	m = malloc(new_size);
	if (m == NULL)
		return (NULL);
	limit = old_size;
	if (new_size < old_size)
		limit = new_size;

	c_ptr = ptr;
	while (limit--)
		m[limit] = c_ptr[limit];

	free(ptr);
	return (m);
}

