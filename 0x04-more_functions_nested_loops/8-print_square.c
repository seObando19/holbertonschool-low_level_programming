#include "holberton.h"

/**
  *print_square - print the cuadrado
  *@size:value to check
  *Return: don´t return
 */
void print_square(int size)
{
	int i = 0, b = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (b < size)
			{
				_putchar(35);
				b++;
			}
			_putchar('\n');
			b = 0;
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
