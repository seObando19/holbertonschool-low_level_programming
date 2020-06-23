#include "holberton.h"

/**
  *rev_string - Print string in reverse
  *@s: pointer to check
  *Return: Don´t return
 */
void rev_string(char *s)
{
	int i = 0, a;
	char let;

	while (s[i] != '\0')
		i++;
	i--;
	for (a = 0; a < i; a++)
	{
		let = s[i];
		s[i] = s[a];
		s[a] = let;
		i--;
	}
}
