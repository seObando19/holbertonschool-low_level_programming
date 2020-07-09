#include "holberton.h"
#include <stdlib.h>

/**
  *malloc_checked - allocated memory
  *@b: integer.
  *Return: ptr or exit 98.
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(sizeof(char) * b);
	if (res == NULL)
	{
		exit(98);
	}
	else
	{
		return (res);
	}
}
