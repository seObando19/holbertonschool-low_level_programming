#include <stdio.h>

/**
 *main -prints the number of arguments passed into it.
 *@argc: number of things in the command line.
 *@argv: array of string values
 *Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
		i++;
	printf("%i\n", --i);
	return (0);
}
