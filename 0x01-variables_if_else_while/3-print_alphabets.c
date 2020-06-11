#include <stdio.h>
#include <stdlib.h>
/**
  *main - print alphabet
  *
  *Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
