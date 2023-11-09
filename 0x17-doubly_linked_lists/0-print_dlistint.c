#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: struct
 * Return: Always int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 1;
	const dlistint_t *i = h;

	if (!h)
		return (0);
	while (i->next != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		++cnt;
	}
	printf("%d\n", i->n);
	return (cnt);
}
