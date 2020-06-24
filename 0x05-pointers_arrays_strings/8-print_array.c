#include <stdio.h>
#include "holberton.h"

/**
  *print_array -print array
  *@a:pointer of the array
  *@n:numbers of the array
  *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
