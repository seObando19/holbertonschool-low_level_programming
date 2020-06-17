#include <stdio.h>

/**
  *main - Function for print addition of n
  *
  *Return: Don´t return value
 */
int main(void)
{
	int n, b;

	n = 3;
	b = 5;
	while (n < 1024)
	{
		n = n + 3;
	}
	while (b < 1024)
	{
		b = b + 5;
	}
	printf("%d\n", n);
	printf("%d\n", b);
	return (0);
}
