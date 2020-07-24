#include "lists.h"
/**
  *len - know lenght of a string
  *@s: pointer of string
  *Return: lenght of string
*/
int len(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
  **add_node_end - adds a new node at the end of a list_t list.
  *@head:memory address of position
  *@str:value of new node
  *Return:addres of new node or NUll
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement;
	list_t *tmp;

	tmp = *head;
	newElement = malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);
	if (newElement == NULL)
		return (NULL);

	newElement->str = strdup(str);
	newElement->len = len(str);
	newElement->next = NULL;

	if (*head == NULL)
	{
		*head = newElement;
		return (newElement);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newElement;
	return (newElement);
}
