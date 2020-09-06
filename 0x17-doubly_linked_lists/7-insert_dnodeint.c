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
	dlistint_t *creatNode, *tmp;
	unsigned int pos = 0;

	if (idx > lenList(*h))
		return (NULL);
	if (idx == 0 || *h == NULL)
		return (NULL);
	if (idx == lenList(*h))
		return (add_dnodeint(h, n));
	creatNode = malloc(sizeof(dlistint_t));
	if (creatNode == NULL)
		return (NULL);
	tmp = *h;
	while (pos++ < idx - 1)
		tmp = tmp->next;
	tmp->next->prev = creatNode;
	creatNode->next = tmp->next;
	tmp->next = creatNode;
	creatNode->n = n;
	creatNode->prev = tmp;
	return (creatNode);
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
