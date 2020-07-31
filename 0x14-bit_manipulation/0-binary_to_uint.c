#include "holberton.h"
/**
  *binary_to_uint -  converts a binary number
  *to an unsigned int.
  *@b: pointer the char value
  *Return: integer of binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;
	int i;

	if (b == NULL)
	return (0);
	for (i = 0; b[i]; i++)
	  	;
	while (*b)
	{
		if (*b != '1' && *b != '0')
		  return (0);
		integer += (*b - '0') << (i - 1) ;
		i--;
		b++;
	}
	return (integer);
}
