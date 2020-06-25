#include "holberton.h"

/**
  * *_strncat - concatenates two strings.
  *@dest: pointer 1 to check.
  *@src: pointer 2 to check.
  *@n:use n bytes
  *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a;

	while (dest[i] != '\0')
		i++;
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[i + a] = src[a];
	return (dest);
}
