#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: pointer to pointer
 * @index: pointer to pointer
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	dlistint_t *x;

	if (!head || *head == NULL)
		return (-1);
	x = *head;
	if (index == 0 && x->next != NULL)
	{
		if (x->next)
			*head = x->next, (*head)->prev = NULL;
		else
			*head = NULL;
		free(x);
		return (1);
	}
	while (x->next && cnt != index)
		x = x->next, ++cnt;
	if (cnt != index)
		return (-1);
	x->prev->next = x->next;
	if (x->next)
		x->next->prev = x->prev;
	free(x);
	return (1);
}
