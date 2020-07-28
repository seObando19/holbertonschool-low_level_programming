#include "lists.h"

/**
  *pop_listint - deletes the head node of a listint_t
  *linked list
  *@head:double pointer to head node.
  *Return: returns the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *newNodo;
	int value;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	newNodo = (*head)->next;
	free(*head);
	*head = newNodo;
	return (value);
}
