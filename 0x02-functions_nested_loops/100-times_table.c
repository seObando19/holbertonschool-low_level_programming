#include "holberton.h"
/**
  *print_times_table - print tables
  *@n: integer to check
  *
  *Return: no return
  */
void print_times_table(int n)
{
	int b, c;

	if (!(n > 15) || n < 0)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				if ((b * c) > 9 && (b * c) < 100)
				{
					_putchar(((b * c) / 10) + '0');
					_putchar(((b * c) % 10) + '0');
				}
				else if ((b * c) >= 100)
				{
					_putchar(((b *  c) / 100) + '0');
					_putchar(((b * c) / 10) % 10 + '0');
					_putchar((b * c) % 10 + '0');
				}
				else
				{
					_putchar((b * c) + '0');
				}
				if (c < n)
					_putchar(','), _putchar(' ');
				if (((c + 1) * b < 10))
					_putchar(' '), _putchar(' ');
				else if ((c + 1) * b >= 10 && (c + 1) * b < 100)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
