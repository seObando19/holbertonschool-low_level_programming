#include "holberton.h"
/**
 * set_bit - function that returns the value of a bit at a given index.
 * @n: pointer to the number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l = 1;

	l <<= index;
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | l;
	return (1);
}
