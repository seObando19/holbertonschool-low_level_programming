#include "holberton.h"

/**
  *puts_half - print the half the string
  *@str: char to check
  *Return:void
 */
void puts_half(char *str)
{
	int i = 0, n, a;

	while (str[i] != '\0')
		i++;
	n = i / 2;
	if (n % 2 == 0)
	{
		for (a = n + 1; a < i; a++)
			_putchar(str[a]);
	}
	else
	{
		n = (i - 1) / 2;
		for (a = n + 1; a < i; a++)
			_putchar(str[a]);
	}
	_putchar('\n');
}
