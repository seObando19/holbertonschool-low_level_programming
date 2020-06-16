#include "holberton.h"

/**
  *_isalpha -Know if is lowercase or uppercase or letter
  *@c: The character to check
  *Return: (1) if exits lowercase else (0)
 */
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
	
}
