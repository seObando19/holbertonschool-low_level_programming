#include "holberton.h"

/**
  *main - Print 'Holberton'
  *
  *Return: void
*/
int main(void)
{
	unsigned int i;
	char nom[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (i = 0; i < sizeof(nom); i++)
	{
		_putchar(nom[i]);
	}
	_putchar('\n');
	return (0);
}
