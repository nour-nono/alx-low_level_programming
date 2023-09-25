#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: pointer to pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *x, *y;

	if (!*head)
		return;
	y = *head;
	while (*head)
	{
		x = y, y = y->next;
		free(x);
	}
	*head = NULL;
}
