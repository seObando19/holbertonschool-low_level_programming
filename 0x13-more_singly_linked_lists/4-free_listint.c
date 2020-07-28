#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node.
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	if (head == NULL)
		return;
	freeNode = head;
	while (head != NULL)
	{
		freeNode = freeNode->next;
		free(head);
		head = freeNode;
	}
}
