#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints its name, followed by a new line.
  *@argc: count of the params
  *@argv: array of the params
  *Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
