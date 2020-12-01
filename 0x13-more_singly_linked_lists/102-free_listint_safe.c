#include "lists.h"

/**
 * free_listint_safe - safely frees lists even with a loop
 * @h: adress of the head of the listint list to be freed
 *
 * Return: the size of the list to was free'd, head get set to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0, cnt = 0;
	listint_t *next = NULL, *runner = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	size = safe_list_len(*h);
	runner = *h;

	while(cnt < size)
	{
		next = runner->next;
		free(runner);
		runner = next;
		cnt++;
	}

	*h = NULL;
	return (size);
}
