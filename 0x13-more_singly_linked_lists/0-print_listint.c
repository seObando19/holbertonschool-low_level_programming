#include "lists.h"

/**
  *print_listint - prints all the elements
  * of a listint_t list.
  *@h:pointer of the list
  *Return :number of the nodes
*/
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		if (h->n == 0)
		{
			printf("NULL");
			i++;
		}
		else
		{
			printf("%i\n", h->n);
			i++;
		}
		h = h->next;
	}
	return (i);
}