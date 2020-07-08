#include "holberton.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid previously created
  *@grid: pointer of array bidimensional
  *@height: height of array
  *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
