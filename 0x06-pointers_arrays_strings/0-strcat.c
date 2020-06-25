#include "holberton.h"

/**
  * *_strcat - concatenates two strings.
  *@dest: pointer to check
  *@src: pointer to check
  *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a;

	while (dest[i] != '\0')
		i++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	return (dest);
}
