#include "holberton.h"
/**
  *jack_bauer - Print every minute of the day
  *
  *Return: not Return
  */
void jack_bauer(void)
{
	int i, a, b, c;

	for (c = 48; c < 51; c++)
	{
		for (b = 48; b < 58; b++)
		{
			for (a = 48; a < 54; a++)
			{
				for (i = 48; i < 58; i++)
				{
					_putchar(c);
					_putchar(b);
					_putchar(58);
					_putchar(a);
					_putchar(i);
					_putchar('\n');
				}
			}
			if (c == 50 && b == 51)
				break;
		}
	}
}
