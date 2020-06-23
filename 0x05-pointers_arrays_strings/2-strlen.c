#include "holberton.h"

/**
  *_strlen - Print the length of a string
  *@s:Pointer to check
  *Return: Return the length
 */
int _strlen(char *s)
{
	int cont = 1, i = 1;

	while (i != 0)
	{
		if (s[i] == '\0')
			break;
		cont++;
		i++;
	}
	return (cont);
}
