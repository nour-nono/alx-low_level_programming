#include "lists.h"
/**
 * add_node - check the code
 * @head: linked list head
 * @str: string
 * Return: Always int.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr = malloc(sizeof(list_t));

	if (!curr)
		return (NULL);
	curr->str = strdup(str);
	curr->len = _strlen(str);
	curr->next = *head;
	*head = curr;
	return (curr);
}
