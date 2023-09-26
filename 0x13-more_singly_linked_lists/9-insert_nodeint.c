#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: pointer to pointer
 * @idx: pointer to pointer
 * @n: pointer to pointer
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int cnt = -1;
	listint_t *x = *head, *y, *new_node;

	while (x && cnt + 1 != idx)
		++cnt, x = x->next;
	if (cnt + 1 != idx)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n, y = x->next, new_node->next = y, x->next = new_node;
	return (new_node);
}
