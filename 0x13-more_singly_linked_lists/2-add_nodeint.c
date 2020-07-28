#include "lists.h"

/**
  *add_nodeint - adds a new node at the
  *beginning of a listint_t list.
  *@head: double pointer of list
  *@n: value int for new node
  *Return: the address the new node
  *
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
