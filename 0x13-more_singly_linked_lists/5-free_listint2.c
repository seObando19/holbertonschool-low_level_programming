#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL.
 * @head: double pointer to head node.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeMemory;

	if (head == NULL)
	{
		return;
	}
	freeMemory = *head;
	while (*head != NULL)
	{
		freeMemory = freeMemory->next;
		free(*head);
		*head = freeMemory;
	}
	*head = NULL;
}
