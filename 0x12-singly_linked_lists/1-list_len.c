#include "lists.h"

/**
  *list_len - returns the number of elements in a
  *linked list_t list.
  *@h:pointer of the list
  *Return: number of elements of list
*/
size_t list_len(const list_t *h)
{
	int len;

	len = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			len++;
		}
		else
		{
			len++;
		}
		h = h->next;
	}
	return (len);
}
