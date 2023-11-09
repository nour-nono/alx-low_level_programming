#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head: linked list head
 * @n: string
 * Return: Always int.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t)), *ex = *head;

	if (!curr)
		return (NULL);
	while (ex && ex->next)
		ex = ex->next;
	curr->n = n;
	curr->next = NULL, curr->prev = ex;
	if (!ex)
		*head = curr;
	else
		ex->next = curr;
	return (curr);
}
