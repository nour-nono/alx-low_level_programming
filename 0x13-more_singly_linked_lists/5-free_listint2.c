#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: pointer to pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (!head)
		return;
	while (*head)
	{
		x = *head, *head = (*head)->next;
		free(x);
	}
}
