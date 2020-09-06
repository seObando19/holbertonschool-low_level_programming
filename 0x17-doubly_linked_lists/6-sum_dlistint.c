#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 *@head:Double pointer of the list
 *Return:addtion of the all values in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *runNode;
	int sum = 0;

	if (!(head == NULL))
	{
		runNode = head;
		while (runNode != NULL)
		{
			sum += runNode->n;
			runNode = runNode->next;
		}
		return (sum);
	}
	return (sum);
}
