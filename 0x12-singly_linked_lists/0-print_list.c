/**
 * print_list - check the code
 * @h: struct
 * Return: Always int.
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 1;

	while (h->next != NULL)
	{
		(!h->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", h->len, h->str);
h = h->next;
		++cnt;
	}
	(!h->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", h->len, h->str);
	return (cnt);
}
