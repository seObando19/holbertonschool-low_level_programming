#include "holberton.h"
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  *@str: Pointer of string
  *Return: Null if the failed or pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ac;

	ac = malloc(sizeof(str));
	if (str == 0)
	{
		return (NULL);
	}
	if (!ac)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		ac[i] = str[i];
		i++;
	}
	return (ac);
}
