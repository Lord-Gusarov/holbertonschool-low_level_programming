#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*task 0*/
size_t print_list(const list_t *h);
/*task 1*/
size_t list_len(const list_t *h);
/*task 2*/
list_t *add_node(list_t **head, const char *str);
/*task 3*/
list_t *add_node_end(list_t **head, const char *str);
/*task 4*/
void free_list(list_t *head);
/* printBeforeMain - prinst something before main() is executed*/
void printBeforeMain(void) __attribute__((constructor));

#endif

