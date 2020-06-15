#include "holberton.h"
/**
  *print_alphabet_x10 - Print alphabet 10 times
  *
  *following new line
  */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
