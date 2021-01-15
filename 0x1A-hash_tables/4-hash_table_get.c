#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table from which to retrieve
 * @key: key of the value to retrieve
 * Return: the value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *trv = NULL;

	if (strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);

	trv = ht->array[idx];

	while (trv != NULL)
	{
		if (strcmp(key, trv->key) == 0)
			return (trv->value);
		trv = trv->next;
	}

	return (NULL);
}
