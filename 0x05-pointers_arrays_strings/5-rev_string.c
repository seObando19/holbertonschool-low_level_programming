#include "holberton.h"

/**
  *rev_string - Print string in reverse
  *@s: pointer to check
  *Return: Don´t return
 */
void rev_string(char *s)
{
	int i = 0, a = 0;
	char let, rev[10];

	for (i = 8; i >= 0; i--)
	{
		let = s[i];
		rev[a] = let;
		a++;
	}
	for (a = 0; a < 9; a++)
		s[a] = rev[a];
}
