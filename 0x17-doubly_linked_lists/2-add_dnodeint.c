#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head: linked list head
 * @str: string
 * Return: Always int.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t));

	if (!curr)
		return (NULL);
	curr->n = n;
	curr->next = *head;
	curr->prev = NULL;
	(*head)->prev = curr;
	*head = curr;
	return (curr);
}
