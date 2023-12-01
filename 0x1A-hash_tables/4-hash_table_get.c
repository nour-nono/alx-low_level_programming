#include "hash_tables.h"

/**
 * hash_table_get - get the index of the key
 *
 * @key: key of the element
 * @ht: the hashtable to be edited
 *
 * Return: the value of key or NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *target = NULL;

	if (!ht || !key)
		return (NULL);
	target = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (target && strcmp(target->key, key) != 0)
		target = target->next;
	if (!target)
		return (NULL);
	return (target->value);
}
