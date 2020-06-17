#include "holberton.h"
/**
  *print_times_table - print tables
  *@n: integer to check
  *
  *Return: no return
  */
void print_times_table(int n)
{
	int b, c, res;

	if (!(n > 15) || n < 0)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				res = b * c;
				if (res < 10)
					_putchar(res + '0');
				else if (res >= 10 && res < 100)
				{
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
				}
				if (c < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((res + b) < 10)
						_putchar(' '), _putchar(' ');
					else if ((res + b) >= 10 && (res + b) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
