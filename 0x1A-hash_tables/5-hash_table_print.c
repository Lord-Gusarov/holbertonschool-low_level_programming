#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hast table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *trv;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			trv = ht->array[i];
			while (trv != NULL)
			{
				if (flag == 0)
				{
					printf("\'%s\': \'%s\'", trv->key, trv->value);
					flag = 1;
				}
				else
					printf(", \'%s\': \'%s\'", trv->key, trv->value);
				trv = trv->next;
			}
		}
		printf("}\n");
	}
}
