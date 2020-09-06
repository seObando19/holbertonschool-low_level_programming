#include "lists.h"

/**
 *add_dnodeint_end -adds a new node at the end
 *of a dlistint_t list.
 *@head:Double pointer of the list
 *@n:value of the list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;

	if (*head == NULL)
		return (add_dnodeint(head, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = newnode;
			newnode->next = NULL;
			newnode->prev = tmp;
			return (newnode);
		}
		tmp = tmp->next;
	}
	return (newnode);
}
