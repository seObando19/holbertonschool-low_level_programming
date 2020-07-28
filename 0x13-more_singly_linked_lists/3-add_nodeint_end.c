#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end
  * of a listint_t list.
  *@head: double pointer to variable the list
  *@n: value to add in the new node
  *Return:address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	return (newNode);
}
