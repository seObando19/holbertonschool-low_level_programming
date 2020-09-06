#include "lists.h"

/**
 *insert_dnodeint_at_index - function that
 *inserts a new node at a given position.
 *@h:Double pointer of the list
 *@idx:the index of the list where the new node
 *should be added
 *@n:value of the list
 *Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *creatNode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int pos = 0;

	tmp = *h;
	if (creatNode == NULL)
		return (NULL);
	creatNode->n = n;
	if (idx == 0)
	{
		*h = creatNode;
		creatNode->next = tmp;
		return (creatNode);
	}
	while (pos < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		pos++;
	}
	creatNode->next = tmp->next;
	tmp->next = creatNode;
	return (creatNode);
}
