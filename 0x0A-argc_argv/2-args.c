#include <stdio.h>

/**
 *main - prints all arguments it receives.
 *@argc: numbers of the things in the command line
 *@argv: array of strings values
 *Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
