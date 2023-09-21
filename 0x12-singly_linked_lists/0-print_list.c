#include "lists.h"
/**
 *  _strlen - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;
	return (i);
}
/**
 * print_list - check the code
 * @h: struct
 * Return: Always int.
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 1;
	const list_t *i = h;
	int le;

	if (!h)
		return (0);
	le = _strlen(i->str);
	while (i->next != NULL)
	{
		le = _strlen(i->str);

		(!i->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", le, i->str);
		i = i->next;
		++cnt;
	}
	(!i->str) ? printf("[0] (nil)\n") : printf("[%d] %s\n", le, i->str);
	return (cnt);
}
