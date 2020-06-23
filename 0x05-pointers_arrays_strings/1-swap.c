#include "holberton.h"

/**
  *swap_int - swaps value the two integers
  *@a:pointer 1;
  *@b:pointer 2;
  *Return:Don't return
 */
void swap_int(int *a, int *b)
{
	int cbo1, cbo2;

	cbo1 = *a;
	cbo2 = *b;

	*a = cbo2;
	*b = cbo1;

}
