#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - print base 16
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	char alphat;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (alphat = 'a'; alphat <= 'f'; alphat++)
	{
		putchar(alphat);
	}
	putchar('\n');
	return (0);
}
