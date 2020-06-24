#include "holberton.h"

/**
  *_atoi - convertir string a entero
  *@s: pointer to check
  *Return: number
 */
int _atoi(char *s)
{
	int sign = 0;
	int r = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign++;
		else if (*s >= '0' && *s <= '9')
		{
			r = r * 10 + (*s - '0');
		}
		else if (r > 0)
			break;
		s++;
	}
	if (sign % 2 != 0)
		return (r * -1);

	return (r);
}
