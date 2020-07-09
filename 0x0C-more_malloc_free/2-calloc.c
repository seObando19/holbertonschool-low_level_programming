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
	int *av;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	av = malloc(nmemb * size);
	if (av == NULL)
	{
		return (NULL);
	}
	while (av[i] != '\0')
	{
		av[i] = 0;
	}
	return (av);
}
