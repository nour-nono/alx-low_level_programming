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
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;
	return (i);
}
/**
 * add_node_end - check the code
 * @head: linked list head
 * @str: string
 * Return: Always int.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = malloc(sizeof(list_t));
	list_t *ex = *head;

	if (curr)
		return (NULL);
	while (ex && ex->next)
		ex = ex->next;
	curr->str = strdup(str);
	curr->len = _strlen(str);
	curr->next = NULL;
	if (!ex)
		*head = curr;
	else
		ex->next = curr;
	return (curr);
}
