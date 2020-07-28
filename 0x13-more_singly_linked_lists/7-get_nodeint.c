#include "lists.h"
/**
  * *get_nodeint_at_index - returns the nth node
  *of a listint_t linked list.
  *@head: double pointer to head node.
  *@index: value to find in the list
  *Return: node the equal to index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *findptr;
	unsigned int cont = 0;

	if (!(head == NULL) || !(index == 0))
	{
		findptr = head;
		while (head != NULL)
		{
			if (cont == index)
			{
				return (findptr);
			}
			else
			{
				findptr = findptr->next;
				head = findptr;
				cont++;
			}
		}
	}
	return (NULL);
}
