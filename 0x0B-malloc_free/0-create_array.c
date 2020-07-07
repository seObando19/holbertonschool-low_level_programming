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

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ac = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ac[i] = c;
		}
		return (ac);
	}
}
