#include "holberton.h"

/**
  * *_strstr - locates a substring.
  *@haystack: string to check
  *@needle: subtring to search
  *Return: return s if found the substring else return null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; needle[i] > '\0'; i++)
	{
		for (a = 0; haystack[a] != '\0'; a++)
		{
			if (haystack[a] == needle[i])
				return (&haystack[a]);
		}
	}
	return ('\0');
}
