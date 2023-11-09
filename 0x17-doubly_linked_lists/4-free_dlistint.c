#include "lists.h"
/**
 * free_dlistint - check the code
 * @head: linked list head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	head = NULL;
}
