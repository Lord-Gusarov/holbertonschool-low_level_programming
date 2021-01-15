#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of the ididcated size
 * @size: size of the desired hash table
 * Return: the new hash_table or Null if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (size > 0)
		table->array[--size] = NULL;

	return (table);
}
