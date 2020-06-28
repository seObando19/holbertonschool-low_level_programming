#include "holberton.h"

/**
  * *_memcpy - copies memory area.
  *@dest: pointer 1
  *@src: pointer 2 with values for pointer 1
  *@n: numbers values
  *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
