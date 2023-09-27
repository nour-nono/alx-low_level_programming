#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 * @head: pointer to pointer
 * @idx: pointer to pointer
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 1;
	listint_t *x, *y, *d;
	if (!head)
		return (-1);
	x = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0 && x->next != NULL)
	{
		*head = x->next;
		free(x);
		return (1);
	}
	if (index == 0 && x->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	while (x->next && cnt < index)
		x = x->next, ++cnt;
	if (cnt < index)
		return (-1);
	y = x->next, d = y, y = y->next;
	free(d);
	x->next = y;
	return (1);
}
