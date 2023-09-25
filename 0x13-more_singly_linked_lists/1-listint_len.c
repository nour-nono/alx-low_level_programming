#include "lists.h"
/**
 * listint_len - check the code
 * @h: struct
 * Return: Always 0.
*/
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		++cnt;
		h = h->next;
	}
	return (cnt);
}
