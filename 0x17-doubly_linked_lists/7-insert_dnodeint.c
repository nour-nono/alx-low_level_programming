#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h: pointer to pointer
 * @idx: pointer to pointer
 * @n: pointer to pointer
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 1;
	listint_t *x, *y, *new_node;

	if (!h)
		return (NULL);
	x = *h;
	while (x && (cnt + 1 <= idx))
		++cnt, x = x->next;
	if (cnt + 1 <= idx || (x == NULL && idx != 0))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
	{
		new_node->prev = NULL, new_node->next = x, *h = new_node;
		if (x)
			x->prev = new_node;
	}
	else
	{
		new_node->prev = x, new_node->next = x->next, x->next = new_node;
		x = new_node->next;
		if (x)
			x->prev = new_node;
	}
	return (new_node);
}
