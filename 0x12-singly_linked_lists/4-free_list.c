#include "lists.h"

/**
  *free_list - frees a list_t list.
  *@head:memory address of position
  *Return: void
*/
void free_list(list_t *head)
{
	list_t *newptr;

	while (head != NULL)
	{
		newptr = head;
		free(newptr->str);
		free(newptr);
		head = head->next;
	}
}
