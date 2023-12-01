#include "hash_tables.h"

/**
 * hash_table_set - get the index of the key
 *
 * @key: key of the element
 * @value: value of the element
 * @ht: the hashtable to be edited
 *
 * Return: 1 succeeded 0 failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *target = NULL;

	if (!ht || !key)
		return (0);
	target = ht->array[key_index((const unsigned char *) key, ht->size)];
	while (target && strcmp(target->key, key) != 0)
		target = target->next;
	if (strcmp(target->key, key) != 0)
	{
		target = malloc(sizeof(hash_node_t));
		if (!target)
			return (0);
		target->key = strdup(key), target->value = strdup(value);
	
		if (!target->key || !target->value)
			return (0);
	}
	else
	{
		free(target->value);
		target->value = strdup(value);
	}
	return (1);
}
