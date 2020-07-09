#include "holberton.h"
#include <stdlib.h>

/**
  * *_calloc - allocates memory for an array
  *@nmemb:memory for an array of nmemb
  *@size: size of bytes of array
  *Return: NUll if process faile or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *av;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	av = malloc(size * nmemb);
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		av[i] = 0;
	}
	return (av);
}
