#include "lists.h"
/**
 * pop_listint - check the code
 * @head: pointer to pointer
 * Return: Always 0.
*/
int pop_listint(listint_t **head)
{
	int y;
	listint_t *x;

	if (!*head)
		return (0);
	x = *head;
	*head = (*head)->next;
	y = x->n;
	free(x);
	return (y);
}
