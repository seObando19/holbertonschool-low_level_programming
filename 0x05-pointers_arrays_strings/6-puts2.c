#include "holberton.h"

/**
  *puts2 - print the every other characters
  *@str: char to check
  *Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
