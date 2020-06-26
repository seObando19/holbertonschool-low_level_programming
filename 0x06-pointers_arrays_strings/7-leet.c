#include "holberton.h"

/**
  * *leet - encodes a string into 1337.
  *@s: pointer
  *Return: string encoded
 */
char *leet(char *s)
{
	int i = 0, a;
	char val[5] = {'4', '3', '0', '7', '1'};
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};

	while (s[i] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if ((s[i] == lower[a]) || (s[i] == upper[a]))
				s[i] = val[a];
		}
		i++;
	}
	return (s);
}
