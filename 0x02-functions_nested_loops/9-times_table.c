#include "holberton.h"
/**
  *times_table - print tables
  *
  *Return: no return
  */
void times_table(void)
{
	int val1, val2;
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if ((b * c) > 9)
			{
				val1 = (b * c) / 10;
				val2 = (b * c) % 10;

				_putchar(val1 + '0');
				_putchar(val2 + '0');
			}
			else
			{
				_putchar((b * c) + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((c + 1) * b < 10)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
