#include "lists.h"

/**
 *free_dlistint -  free a dlistint_t list.
 *@head:memory address of position
 *Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *delete_ptr;

	while (head)
	{
		delete_ptr = head;
		free(delete_ptr);
		head = head->next;
	}
}
