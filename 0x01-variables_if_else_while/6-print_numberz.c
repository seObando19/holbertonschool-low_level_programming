#include <stdio.h>
#include <stdlib.h>
/**
  *main - print numbers with putchar
  *
  *Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
