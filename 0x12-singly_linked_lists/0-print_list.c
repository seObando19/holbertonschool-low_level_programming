#include "lists.h"
#include <stdio.h>

/**
  *print_list - prints all the elements of a list_t list
  *@h: pointer of the list
  *Return: number of the nodes
*/
size_t print_list(const list_t *h)
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
			printf("[%i] %s\n", h->len, h->str);
			len++;
		}
		h = h->next;
	}
	return (len);
}
