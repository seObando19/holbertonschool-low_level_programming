#include "holberton.h"

/**
  *_atoi - convertir string a entero
  *@s: pointer to check
  *Return: number
 */
int _atoi(char *s)
{
	iint cont = 0;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			cont++;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
			break;
		s++;
	}
	if (cont % 2 != 0)
		return (result * -1);

	return (result);
}
