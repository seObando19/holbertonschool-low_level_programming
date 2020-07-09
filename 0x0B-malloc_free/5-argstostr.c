#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *argstostr - This function concatenates all the arguments
  *@ac: numbers of arguments
  *@av: array of strings
  *Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, cont = 0, a;
	char *as, *aux;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a] != '\0'; a++)
		{
			cont++;
		}
		cont++;
	}
	cont += 1;
	as = malloc(cont * sizeof(char));
	if (as == NULL)
	{
		return (NULL);
	}
	aux = as;
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a] != '\0'; a++)
		{
			*as = av[i][a];
			as++;
		}
		*as = '\n';
		as++;
	}
	return (aux);
}
