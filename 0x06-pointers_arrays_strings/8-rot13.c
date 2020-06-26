#include "holberton.h"

/**
  * *rot13 - encodes a string using rot13.
  *@s: pointer
  *Return: s;
 */
char *rot13(char *s)
{
	int i = 0, a;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i]  != '\0')
	{
		for (a = 0; a < 51; a++)
		{
			if (s[i] == alp[a])
			{
				s[i] = rot[a];
				break;
			}
		}
		i++;
	}
	return (s);
}
