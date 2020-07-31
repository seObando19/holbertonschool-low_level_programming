#include "holberton.h"
/**
  * clear_bit -  sets the value of a bit to 0
  * @n: pointer to the number
  * @index: index
  * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int change = 1;

	change <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(change);
	return (1);
}
