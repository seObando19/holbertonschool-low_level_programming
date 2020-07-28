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
		while (head->next != NULL)
		{
			ptr = ptr->next;
			head = ptr;
			cont += ptr->n;
		}
		return (cont);
	}
	return (0);
}
