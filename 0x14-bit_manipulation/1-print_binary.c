#include "holberton.h"

/**
  *print_binary -  prints the binary
  *representation of a number.
  *@n: number to convert
*/
void print_binary(unsigned long int n)
{
	int i, band = 0;

	if (n == 0)
		_putchar('0');
	i = sizeof(n) * 8 - 1;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			band = 1;
		}
		if (band == 1)
		{
			if ((n >> i) & 1)
			{
				_putchar('1');
			}
			else
			{
			_putchar('0');
			}
		}
	}
}
