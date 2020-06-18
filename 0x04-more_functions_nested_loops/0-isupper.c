#include "holberton.h"
/**
 *_isupper -Know if is Uppercase
 *@c: The character to check
 *Return: (1) if exits Uppercase else (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
