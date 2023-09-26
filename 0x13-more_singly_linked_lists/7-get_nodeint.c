#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: pointer to pointer
 * @index: int
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
