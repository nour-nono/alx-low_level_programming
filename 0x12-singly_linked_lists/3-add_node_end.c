#include "lists.h"
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
