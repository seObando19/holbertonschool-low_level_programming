#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node
 *at index index of a dlistint_t linked list.
 *@head::Double pointer of the list
 *@index:the index of the node that should be deleted
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *oth = NULL;
	unsigned int pos = 0;

	if (!head)
		return (-1);
	if (index >= lenList(*head))
		return (-1);
	if (index == 0)
	{
		oth = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(oth);
		return (1);
	}
	if (index == lenList(*head) - 1)
	{
		while (pos++ < index - 1)
			tmp = tmp->next;
		oth = tmp->next;
		tmp->next = NULL;
		free(oth);
		return (1);
	}
	while (pos++ < index - 1)
		tmp = tmp->next;
	oth = tmp->next;
	tmp->next = tmp->next->next;
	tmp->next->prev = tmp;
	free(oth);
	return (1);
}

/**
 *lenList - function for know len of the list
 *@h:Double pointer of the list
 *Return: size of the list
 */
size_t lenList(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
