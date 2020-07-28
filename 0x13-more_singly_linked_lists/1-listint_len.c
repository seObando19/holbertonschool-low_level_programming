#include "lists.h"

/**
  *listint_len - returns the number of elements
  *in a linked listint_t list.
  *@h: pointer of the linked list
  *Return: the number the elements of list
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h == 0)
		{
			printf("(nil)\n");
			i++;
		}
		else
		{
			i++;
		}
		h = h->next;
	}
	return (i);
}
