#include "lists.h"

/**
  * sum_listint -  returns the sum of all the data (n)
  *of a listint_t linked list.
  *@head:double pointer to head node.
  *Return: plus of the nodes
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int cont = 0;

	if (!(head == NULL))
	{
		ptr = head;
		while (ptr != NULL)
		{
			cont += ptr->n;
			ptr = ptr->next;
		}
		return (cont);
	}
	return (cont);
}
