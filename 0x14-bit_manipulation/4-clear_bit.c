#include "holberton.h"
/**
  *clear_bit -  sets the value of a bit to 0
  * @n: pointer to the number
  * @index: index
  * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l = 1;

	l <<= index;
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & (~l);
	return (1);
}
