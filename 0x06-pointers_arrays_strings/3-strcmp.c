#include "holberton.h"

/**
  * _strcmp - compares two strings
  *@s1: pointer 1 to check
  *@s2: pointer 2 to check
  *Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (a == b)
	{
		return (0);
	}
	else if (a > b)
	{
		return (15);
	}
	else
	{
		return (15 * -1);
	}
}
