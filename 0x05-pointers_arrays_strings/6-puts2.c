#include "holberton.h"

/**
  *puts2 - print the every other characters
  *@str: char to check
  *Return: void
 */
void puts2(char *str)
{
	int i = 9, a;

	for (a = 0; a < i; a++)
	{
		if (str[a] % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
