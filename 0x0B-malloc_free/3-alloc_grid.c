#include "holberton.h"
#include <stdlib.h>

/**
  * **alloc_grid - pointer to a 2 dimensional array of int.
  *@width: width of array
  *@height: height of array
  *Return: double pointer of array
 */
int **alloc_grid(int width, int height)
{
	int i, a, **ai;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	ai = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		ai[i] = malloc(width * sizeof(int));
	}
	if (!ai)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (a = 0; a < width; a++)
		{
			ai[i][a] = 0;
		}
	}
	return (ai);
}
