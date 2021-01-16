#include "hash_tables.h"

/**
 * free_list - fress linked lists
 * @head: head of the list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *trv;
	hash_node_t *trv2;

	trv = head;
	while (trv)
	{
		trv2 = trv->next;
		free(trv->value);
		free(trv->key);
		free(trv);
		trv = trv2;
	}
}
/**
  * hash_table_delete - frees hash table
  * @ht: hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
