#include "holberton.h"

/**
  *reverse_array - reverse to array
  *@a: pointer the array
  *@n: witch the array
  *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int m = n - 1;
	int let;

	for (i = 0; i < m; i++)
	{
		let = a[i];
		a[i] = a[m];
		a[m] = let;
		m--;
	}
}
