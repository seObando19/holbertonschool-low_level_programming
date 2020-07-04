#include <stdio.h>

/**
  *main - prints its name, followed by a new line.
  *@argc: count of the params
  *@argv: array of the params
  *Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
