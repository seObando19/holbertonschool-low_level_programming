#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of
 *a dlistint_t linked list.
 *@head:Double pointer of the list
 *@index:Value to find in list
 *Return:Return to nth of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *findNode;
	unsigned int position = 0;

	if (!(head == NULL) || !(index == 0))
	{
		findNode = head;
		while (head != NULL)
		{
			if (position == index)
			{
				return (findNode);
			}
			else
			{
				findNode = findNode->next;
				head = findNode;
				position++;
			}
		}
	}
	return (NULL);
}
