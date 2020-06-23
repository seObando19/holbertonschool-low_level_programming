#include "holberton.h"

/**
  *_strlen - Print the length of a string
  *@s:Pointer to check
  *Return: Return the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
