#include "holberton.h"
/**
  *print_last_digit - return the last digit
  *@n:the integer to check
  *
  *Return:return the last digit of integer
  */
int print_last_digit(int n)
{
	n = n % 10;
	if ((n > 0) || (n == 0))
	{
		n = n + '0';
		_putchar(n);
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
		return (n);
	}
}
