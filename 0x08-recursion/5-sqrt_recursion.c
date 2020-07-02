#include "holberton.h"

/**
  *root_square - find the root square
  *@a:value increment
  *@b:value root square
  *Return: value
 */
int root_square(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else if ((a * a) > b)
	{
		return (-1);
	}
	else
	{
		return (root_square(a + 1, b));
	}
}

/**
 *_sqrt_recursion - find the root square
 *@n: value to find
 *Return: root
 */
int _sqrt_recursion(int n)
{
	int l = 0;
	n = root_square(l + 1, n);
	return (n);
}
