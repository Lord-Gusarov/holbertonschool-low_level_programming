#include "hash_tables.h"

/**
 * key_index - Gets the index of a key for a particular hash table size
 * @key: string key
 * @size: is the size of the array in the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
