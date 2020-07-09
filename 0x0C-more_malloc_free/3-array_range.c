#include "holberton.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers.
  *@min: value min
  *@max: value max
  *Return: pointer
 */
int *array_range(int min, int max)
{
	int *ai, i = 0, res;

	if (min > max)
	{
		return (NULL);
	}
	res = (max - min) + 1;
	ai = malloc((res) * sizeof(int));
	if (ai == NULL)
	{
		return (NULL);
	}
	while (min < res)
	{
		ai[i] = min;
		min++;
		i++;
	}
	return (ai);
}
