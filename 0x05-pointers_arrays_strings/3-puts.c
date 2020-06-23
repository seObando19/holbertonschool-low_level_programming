#include "holberton.h"

/**
  *_puts - Print phrase
  *@str: pointer to check
  *Return: Don't return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
