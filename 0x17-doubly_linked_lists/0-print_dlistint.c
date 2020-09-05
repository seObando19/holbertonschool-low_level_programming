#include "lists.h"

/**
 *print_dlistint - prints all the elements of a
 *dlistint_t list.
 *@h:pointer of linked list
 *Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (EXIT_FAILURE);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
