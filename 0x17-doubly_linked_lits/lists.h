#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*task 0*/
size_t print_dlistint(const dlistint_t *h);
/*task 1*/
size_t dlistint_len(const dlistint_t *h);
/*task 2*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/*task 3*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/*task 4*/
void free_dlistint(dlistint_t *head);
/*task 5*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/*task 6*/
int sum_dlistint(dlistint_t *head);
/*task 7*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/*task 8*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
