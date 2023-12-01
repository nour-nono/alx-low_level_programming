#include "hash_tables.h"

/**
 * key_index - get the index of the key
 *
 * @key: key of the element
 * @size: size of the array
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (NULL);
	return (hash_djb2(key) % size);
}
