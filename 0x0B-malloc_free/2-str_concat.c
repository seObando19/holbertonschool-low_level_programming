#include "holberton.h"
#include <stdlib.h>
/**
  * _stlen - find the length of string
  *@a: pointer to exam
  *Return: length of string
 */
int _stlen(char *a)
{
	int l = 0;

	while (a[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
  * *str_concat - concatenates two strings.
  *@s1: pointer of first string
  *@s2: pointer of second string
  *Return: Null if proccess failed or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, len1 = 0, len2 = 0;
	char *ar;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = _stlen(s1);
	len2 = _stlen(s2);
	ar = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (x = 0; x < len2; x++)
	{
		ar[i] = s2[x];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
