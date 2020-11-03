#include "lists.h"

/**
 * sum_listint - sums all the data (n) in s listint_t list
 * @head: current head of the list
 *Return: the summ of all the data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
