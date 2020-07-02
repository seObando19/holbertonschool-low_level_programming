#include "holberton.h"

/**
  *_strlen - find to length
  *@s: pointer to find
  *Return: length to pointer
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
  *find_pal - search to match in the string
  *@s: pointer
  *@end: length of string
  *Return: 1 is palindrone else 0
 */
int find_pal(char *s, int end)
{
	if (end <= 1)
	{
		return (1);
	}
	else if (*s != s[end - 1])
	{
		return (0);
	}
	else
	{
		return (find_pal((s + 1), (end - 2)));
	}
}

/**
  *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
  *@s: pointer to string
  *Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length <= 0)
	{
		return (0);
	}
	else
	{
		return (find_pal(s, length));
	}
	return (length);
}
