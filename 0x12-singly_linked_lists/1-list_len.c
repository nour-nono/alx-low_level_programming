#include "lists.h"
/**
 * list_len - check the code
 * @h: struct
 * Return: Always int.
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 1;
	const list_t *i = h;

	if (!h)
		return (0);
	while (i->next != NULL)
	{
		i = i->next;
		++cnt;
	}
	return (cnt);
}
