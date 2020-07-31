#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1
  *@n: pointer the value
  *@index: position to change
  *Return: 1 if proccess success -1 faile
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l = 1;

	l <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | l;
	return (1);
}
