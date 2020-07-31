#include "holberton.h"
/**
  * set_bit - sets the value of a bit
  *to 1 at a given index.
  *@n: pointer the value
  *@index: position to change
  *Return: 1 if proccess success -1 faile
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l = 1;

	l <<= index;
	if (index > (8 * sizeof(unsigned long int)))
		return (-1);
	*n = *n | l;
	return (1);
}
