#include "holberton.h"

/**
  * get_bit - returns the value of a bit at a given index.
  *@n: value integer
  *@index:position to find
  *Return: value segun the position
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
		return (-1);
	if ((n >>= index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
