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
	hash_node_t *node = NULL, *trv;

	if (!ht || !key || !value)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	trv = ht->array[idx];
	while (trv && strcmp(key, trv->key) != 0)
		trv = trv->next;
	if (trv)
	{
		free(trv->value);
		trv->value = strdup(value);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key), node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}

	return (1);
}
