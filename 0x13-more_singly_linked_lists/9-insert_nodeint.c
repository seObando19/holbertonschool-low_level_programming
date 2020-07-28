#include "lists.h"

/**
  * insert_nodeint_at_index -inserts a new node
  * at a given position.
  *@head:double pointer to head node.
  *@idx: index of new node
  *@n: Value for the new node
  *Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int position = 0;

	tmp = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		*head = newNode;
		newNode->next = tmp;
		return (newNode);
	}
	while (position < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		position++;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
