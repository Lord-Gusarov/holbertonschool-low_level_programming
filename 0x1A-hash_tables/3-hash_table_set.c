#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add to
 * @key: string key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;

	if (strcmp(key, "") == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key), node->value = strdup(value);

	idx = key_index((const unsigned char *) key, ht->size);

	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
