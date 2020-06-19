#include "holberton.h"

/**
  *print_triangle - print the triangule
  *@size:value to check
  *Return: don´t return
 */
void print_triangle(int size)
{
	int i = 0, c = 0, j, r;

	if (size > 0)
	{
		while (i < size)
		{
			j = size - 1 - i;
			c = j;
			while (c > 0)
			{
				_putchar(32);
				c--;
			}
			c = 0;
			r = size - j;
			while (r > 0)
			{
				_putchar(35);
				r--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
