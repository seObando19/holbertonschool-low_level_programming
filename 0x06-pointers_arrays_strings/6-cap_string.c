#include "holberton.h"

/**
  * *cap_string - capitalizes all words of a string.
  *@s: pointer to check
  *Return: s
 */
char *cap_string(char *s)
{
	int i = 0, band = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 32 && s[i] <= 64 && s[i] != 45) || (s[i] == '\t'))
			band = 1;
		if (s[i] > 96 && s[i] < 123 && band == 1)
		{
			s[i] -= 32;
			band = 0;
		}
		else if (s[i] > 64 && s[i] < 91)
			band = 0;
		if (s[i] > 47 && s[i] < 58)
			band = 0;
		i++;
	}
	return (s);
}
