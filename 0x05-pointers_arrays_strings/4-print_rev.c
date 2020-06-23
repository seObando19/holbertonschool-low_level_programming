#include "holberton.h"

/**
  *print_rev - print phrase in reverse
  *@s:pointer to check
  *Return:Don't return
 */
void print_rev(char *s)
{
	int i = 0, a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = i; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
