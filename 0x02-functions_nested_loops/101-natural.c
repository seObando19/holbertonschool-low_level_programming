#include <stdio.h>

/**
  *main - Function for print addition of n
  *
  *Return: Don´t return value
 */
int main(void)
{
	int n;

	n = 3;
	while (n < 1024)
	{
		n = n + 3;
	}
	printf("%d\n", n);
	return (0);
}
