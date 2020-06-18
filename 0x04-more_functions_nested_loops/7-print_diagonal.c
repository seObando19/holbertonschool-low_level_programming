#include "holberton.h"

/**
  *print_diagonal - print the diagonal
  *@n:value to check
  *Return: don´t return
 */
void print_diagonal(int n)
{
	int i = 0, cont = 0;

	if (!n <= 0)
	{
		while (i < n)
		{
			while (cont < i)
			{
				_putchar(32);
				cont++;
			}
			cont = 0;
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
