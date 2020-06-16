#include "holberton.h"

/**
  *print_sign - print option switch value of n
  *@n:the character to check
  *
  *Return: 1 if  n > 0; Return: 0 if n == 0; Return: if -1 n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
