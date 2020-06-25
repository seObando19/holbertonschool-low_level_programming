#include "holberton.h"

/**
  * *_strncpy - copies a string.
  *@dest: pointer 1 to check
  *@src: pointer 2 to check
  *@n: size bytes
  *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
