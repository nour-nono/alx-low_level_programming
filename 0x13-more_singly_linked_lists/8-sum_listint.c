#include "lists.h"
/**
 * sum_listint - check the code
 * @head: pointer to pointer
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
		sum += head->n, head = head->next;
	return (sum)
}
