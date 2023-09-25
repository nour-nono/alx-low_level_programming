#include "lists.h"
/**
 * add_nodeint_end - check the code
 * @head: pointer to pointer
 * @n: int
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *x;

	if (!*new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!head)
		*head = new_node;
	else
	{
		x = *head;
		while (x->next != NULL)
			x = x->next;
		x->next = new_node;
	}
	return (new_node);
}
