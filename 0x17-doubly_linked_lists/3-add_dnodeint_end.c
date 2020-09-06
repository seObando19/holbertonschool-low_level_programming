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
		return (addd_nodeint(head, n));
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

/**
 *addd_nodeint - adds a new node at the
 *beginning of a dlistint_t list.
 *@head: Double pointer of the list
 *@n: value of the list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *addd_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
