#include "holberton.h"
/**
  *print_alphabet - Print Alphabet
  *
  *Return: Always 0
  */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
