#include "holberton.h"

/**
  * *_memset - fills memory with a constant byte.
  *@s: pointer to buffer
  *@b: value constant
  *@n: number of bytes
  *Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
