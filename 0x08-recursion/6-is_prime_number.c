#include "holberton.h"

/**
  *num_prime - valid if number n is prime
  *@n: number to valid
  *@a: value to check if prime
  *Return: 1 if is prime or 0 if not is
 */
int num_prime(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	else if ((n % a) == 0)
	{
		return (0);
	}
	else
	{
		return (num_prime(n, (a + 1)));
	}
}

/**
  *is_prime_number - 1 if the input int is a prime, otherwise return 0.
  *@n: number to valid
  *Return:1 if is prime or 0 if not is
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
	{
		return (0);
	}
	return (num_prime(n, a));
}
