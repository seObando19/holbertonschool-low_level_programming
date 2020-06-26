#include "holberton.h"

/**
  * *cap_string - capitalizes all words of a string.
  *@s: pointer to check
  *Return: n
 */
char *cap_string(char *s)
{
	int i = 0, band = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.'
		 || s[i] == '!' || s[i] == '?' || s[i] == '"'
		 || s[i] == '(' || s[i] == ')' || s[i] == '{'
		 || s[i] == '}' || s[i] == ' ' || s[i] == '\n'
		 || s[i] == '\t')
		{
			band = 1;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z' && band == 1)
			|| (s[0] >= 'a' && s[0] <= 'z'))
		{
			s[i] -= 32;
			band = 0;
		}
		else
		{
			band = 0;
		}
		i++;
	}
	return (s);
}
