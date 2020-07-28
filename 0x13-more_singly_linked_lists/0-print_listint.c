#include "lists.h"

/**
  *print_listint - prints all the elements
  * of a listint_t list.
  *@h:pointer of the list
  *Return: number of the nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
