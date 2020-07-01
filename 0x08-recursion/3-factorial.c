#include "holberton.h"

/**
  *factorial - returns the factorial of a given number.
  *@n: value to get factorial
  *Return: factorial or -1 if n less to 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (!(n == 1))
		{
			return (n * factorial(n - 1));
		}
		else
		{
			return (n);
		}
	}
}
