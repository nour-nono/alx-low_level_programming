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
	hash_node_t *todelete = NULL, *nx = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		todelete = ht->array[i];
		while (todelete)
		{
			nx = todelete->next;
			free(todelete);
			todelete = NULL;
			todelete = nx;
		}
	}
	free(ht);
	ht = NULL;
}
