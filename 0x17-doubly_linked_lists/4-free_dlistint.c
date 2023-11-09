#include "lists.h"
/**
 * free_dlistint - check the code
 * @head: linked list head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head->prev);
	}
	head = NULL;
}
