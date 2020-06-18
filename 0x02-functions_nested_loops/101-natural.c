#include <stdio.h>

/**
  *main - Function for print addition of n
  *
  *Return: Don´t return value
 */
int main(void)
{
	int n, acum;

	n = 0;
	acum = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			acum += n;
		}
		n++;
	}
	printf("%d\n", acum);
	return (0);
}
