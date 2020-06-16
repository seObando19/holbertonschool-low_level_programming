#include "holberton.h"

/**
  *_islower -Know if is lowercase
  *@c: The character to check
  *Return: (1) if exits lowercase else (0)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
