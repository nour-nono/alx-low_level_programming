#include "hash_tables.h"

/**
 * hash_table_print - print elements
 *
 * @ht: the hashtable to be edited
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *target = NULL, *nx = NULL;
	int i = 0, flag = 0;

	putchar('{');
	if (!ht)
	{
		printf("}\n");
		return;
	}
	for (int i = 0; i < ht->size; ++i)
	{
		target = ht->array[i];
		while (target)
		{
			if (flag)
				printf(", ");
			flag = 1;
			printf("\'%s\': \'%s\'", target->key, target->value);
			target = target->next;
		}
	}
	printf("}\n");
}
