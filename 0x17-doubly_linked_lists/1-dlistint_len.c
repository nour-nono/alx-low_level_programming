#include "lists.h"
/**
 * dlistint_len - check the code
 * @h: struct
 * Return: Always int.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 1;
	const dlistint_t *i = h;

	if (!h)
		return (0);
	while (i->next != NULL)
	{
		i = i->next;
		++cnt;
	}
	return (cnt);
}
