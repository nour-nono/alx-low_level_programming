#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 *
 * @ht: the hashtable to be edited
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nx = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		while (ht->array[i])
		{
			nx = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = nx;
		}
	}
	free(ht->array);
	free(ht);
}
