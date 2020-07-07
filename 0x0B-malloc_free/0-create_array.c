#include "holberton.h"
#include <stdlib.h>

/**
  * *create_array -  creates an array of chars.
  *@size: size of array
  *@c: value to in array
  *Return: Null if failed or pointer if success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ac;

	ac = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (!ac)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ac[i] = c;
	}
	return (ac);
}
