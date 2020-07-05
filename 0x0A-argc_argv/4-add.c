#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
  *main - adds positive numbers.
  *@argc: numbers of things the command line
  *@argv:array of strings values
  *Return: 0 if no number is passed or 1 if one of the number contains
*/
int main(int argc, char **argv)
{
	int i, a, acum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		acum += atoi(argv[i]);
	}
	printf("%i\n", acum);
	return (0);
}
