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
  * *add_node -  adds a new node at the beginning
  *of a list_t list.
  *@head:memory address of position
  *@str:value of new node
  *Return:addres of new node or NUll
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;

	newElement = malloc(sizeof(list_t));
	/* Validate */
	if (head == NULL)
		return (NULL);
	if (newElement == NULL)
		return (NULL);

	/* poner los valores */
	newElement->str = strdup(str);
	newElement->len = len(str);
	/* pasar null a next */
	newElement->next = *head;
	/* pasar el valor */
	*head = newElement;
	return (newElement);
}
