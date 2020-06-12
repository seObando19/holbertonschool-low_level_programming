#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - print numbers
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i, a;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			putchar(i);
			putchar(a);
			if (a == 57 && i == 57)
			{
				continue;
			} else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
