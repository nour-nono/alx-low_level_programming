#include "lists.h"
/**
 * free_listint - check the code
 * @head: pointer to pointer
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head, head = head->next;
		free(x);
	}
}
