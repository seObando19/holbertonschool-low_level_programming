#include "holberton.h"

/**
  *print_numbers - Print numbers 0-9
  *
  *Return: always (0)
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
