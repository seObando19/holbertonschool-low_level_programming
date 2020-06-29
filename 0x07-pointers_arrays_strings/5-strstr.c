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

	for (i = 0; haystack[i]; ++i)
	{
		for (a = 0; needle[a]; ++a)
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
		}
		if (needle[a] == '\0')
			return (haystack + i);
	}
	return (0);
}
