#include "holberton.h"
#include "stdio.h"
/**
  *print_diagsums -  prints the sum of the two diagonals.
  *@a: pointer the array
  *@size: tamaño del array
  *
 */
void print_diagsums(int *a, int size)
{
	int i, l, sm1 = 0, sm2 = 0;

	for (i = 0; i < size; ++i)
		sm1 += (a + i * size)[i];
	for (l = 0; l < size; l++)
		sm2 += (a + l * size)[--i];
	printf("%d, %d\n", sm1, sm2);
}
