#include "lists.h"
/**
 * free_list - check the code
 * @head: linked list head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ex = head;

	while (ex)
	{
		head = ex;
		ex = ex->next;
		free(head);
	}
}
