#include "holberton.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ac;

	if (size == 0)
	{
		return(NULL);
	}
	else
	{
		ac = malloc(sizeof(char) * size);
		for(i = 0; i < size; i++)
		{
			ac[i] = c;
		}
	}
	return (ac);
}
