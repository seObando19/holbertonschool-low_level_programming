#include "function_pointers.h"
#include <stdio.h>

/**
  *array_iterator - executes a function given as a parameter
  *@array: array of int
  *@size: size of array
  *@action: pointer of function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
