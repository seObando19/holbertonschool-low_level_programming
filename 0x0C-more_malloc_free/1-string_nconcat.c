#include "holberton.h"
#include <stdlib.h>
/**
  *len - length of string
  *@s: pointer to string
  *Return: length of string
 */
int len(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
/**
 * *string_nconcat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: integer
 *Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lenString = 0, i, a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lenString = len(s1);
	ptr = malloc((lenString + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (a = 0;a < n; a++)
		ptr[i + a] = s2[a];
	ptr[i + a] = '\0';
	return (ptr);
}
