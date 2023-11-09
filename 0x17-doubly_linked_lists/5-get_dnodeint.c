#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: pointer to pointer
 * @index: int
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (!head)
		return (NULL);
	while (head && cnt != index)
		head = head->next, ++cnt;
	if (cnt == index)
		return (head);
	else
		return (NULL);
}
