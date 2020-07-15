#include "function_pointers.h"

/**
  *int_index - searches for an integer.
  *@array: pointer of array
  *@size: size of array
  *@cmp: pointer of functions
  *Return: -1 if faile process else indice
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (!array|| !cmp ||size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
		{
			return (i);
		}
	}
	return (-1);
}
