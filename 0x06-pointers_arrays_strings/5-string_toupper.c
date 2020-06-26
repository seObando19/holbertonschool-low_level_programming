#include "holberton.h"

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase.
  *@s: pointer to check
  *Return: s
 */
char *string_toupper(char *s)
{
	int i = 0, a;

	while (s[i] != '\0')
		i++;
	for (a = 0; a < i; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] -= 32;
	}
	return (s);
}
