#include "lists.h"
/**
 * print_listint_len - check the code
 * @h: struct
 * Return: Always 0.
 */
size_t print_listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		++cnt;
		h = h->next;
	}
	return (cnt);
}
