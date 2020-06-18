#include "holberton.h"

/**
  *_isdigit - Function to check if is digit
  *@c: value to check
  *Return: (1) is digit or (0) not digit
*/
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
