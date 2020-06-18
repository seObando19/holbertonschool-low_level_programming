#include "holberton.h"

/**
  *print_line - print the line
  *@n:value to check
  *Return: don´t return
 */
void print_line(int n)
{
	int i = 0;

	if (!n <= 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
