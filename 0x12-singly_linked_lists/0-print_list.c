#include "lists.h"
/**
 * print_list - check the code
 * @h: struct
 * Return: Always int.
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 1;
	list_t *i = h;

	while (i->next != NULL)
	{
		(!i->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", i->len, i->str);
		i = i->next;
		++cnt;
	}
	(!i->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", i->len, i->str);
	return (cnt);
}
