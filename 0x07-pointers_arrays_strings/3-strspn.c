#include "holberton.h"

/**
  *_strspn - gets the length of a prefix substring.
  *@s: pointer to counter
  *@accept: values to find in s
  *Return: numbers the bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	unsigned int cont = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (a = 0; s[a] != ' '; a++)
		{
			if (accept[i] == s[a])
				cont++;
		}
	}
	return (cont);
}
