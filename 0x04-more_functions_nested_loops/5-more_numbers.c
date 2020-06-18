#include "holberton.h"

/**
  *more_numbers - Print 10 times the numbers 0 14
  *
  *Return: do not return
 */
void more_numbers(void)
{
	int n = 0, i, a, b;

	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10 + '0';
			b = i % 10 + '0';
			if (!(a == 48))
				_putchar(a);
			_putchar(b);
		}
		_putchar('\n');
		n++;
	}
}
