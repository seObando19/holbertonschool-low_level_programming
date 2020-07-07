#include "holberton.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  *@str: Pointer of string
  *Return: Null if the failed or pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ac;

	ac = malloc(sizeof(str));
	if (str == NULL)
	{
		return (0);
	}
	if (ac == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		ac[i] = str[i];
		i++;
	}
	ac[i] = '\0';
	return (ac);
}
