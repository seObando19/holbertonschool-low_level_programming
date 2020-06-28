#include "holberton.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes.
  *@s: pointer of string to search
  *@accept: string to search in s
  *Return: address of s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return (&s[i]);
		}
	}
	if (s[i] == accept[a])
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
}
