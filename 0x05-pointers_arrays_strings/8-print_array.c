#include <stdio.h>

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
		printf("%d", a[i]);

		if ((i + 1) != 5)
		{
			printf("%c", 44);
			printf("%c", 32);
		}
	}
	printf("\n");
}
