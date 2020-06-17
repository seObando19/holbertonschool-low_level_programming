#include <stdio.h>

/**
  *main - Function for print addition of n
  *
  *Return: Don´t return value
 */
int main(void)
{
	int n, a, i;

	n = 0;
	i = 5;
	a = 3;
	while (n < 1024)
	{
		if (i == a)
		{
			continue;
		}
		else if (a > i)
		{
			n = n + a;
			a = a + 3;
		}
		else
		{
			n = n + i;
			i = i + 5;
		}
	}
	printf("%d\n", n);
	return (0);
}
