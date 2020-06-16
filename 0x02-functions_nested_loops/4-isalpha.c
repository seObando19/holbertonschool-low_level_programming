#include "holberton.h"

/**
  *_isalpha -Know if is lowercase or uppercase or letter
  *@c: The character to check
  *
  *Return: (1) if c is an alphabet, else Return: (0)
 */
int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
