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
	if (!target)
	{
		target = NULL;
		target = malloc(sizeof(hash_node_t));
		if (!target)
			return (0);
		target->key = strdup(key), target->value = strdup(value);
		if (!target->key || !target->value)
		{
			if (target->key)
				free(target->key);
			if (target->value)
				free(target->value);
			free(target);
			return (0);
		}
		target->next = ht->array[key_index((const unsigned char *) key, ht->size)];
	}
	else
	{
		free(target->value);
		target->value = strdup(value);
		return (1);
	}
	ht->array[key_index((const unsigned char *) key, ht->size)] = target;
	return (1);
}
