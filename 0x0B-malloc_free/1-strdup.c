#include "holberton.h"
#include <stdlib.h>
/**
  *_arlen - find the length of string
  *@str: pointer to exam
  *Return: length of string
 */
int _arlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  *@str: Pointer of string
  *Return: Null if the failed or pointer
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *ac;

	len = _arlen(str);
	ac = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (0);
	}
	if (ac == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		ac[i] = str[i];
	}
	ac[i] = '\0';
	return (ac);
}
