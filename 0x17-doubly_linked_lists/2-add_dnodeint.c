#include "lists.h"

/**
 *add_dnodeint - adds a new node at the
 *beginning of a dlistint_t list.
 *@head: Double pointer of the list
 *@n: value of the list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
