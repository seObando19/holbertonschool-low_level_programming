#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node
  *at index index of a listint_t linked list.
  *@head:double pointer to head node.
  *@index:index of new node
  *Return: 1 if process success or -1 faile proccess
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *backNode, *tmp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (-1);
		}
	}
	backNode = tmp->next;
	tmp->next = backNode->next;
	free(backNode);
	return (1);
}
