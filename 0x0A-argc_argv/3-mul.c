#include <stdio.h>
#include <stdlib.h>
/**
  *multiplyArgument - mutiply numbers
  *@a: integer value 1
  *@b: integer value 2
  *Return: answer multiply a and b
 */
int multiplyArgument(int a, int b)
{
	int res = 0;

	res = a * b;
	return (res);
}
/**
  *main - multiplies two numbers.
  *@argc: numbers of thing in command line
  *@argv: array of strings values
  *Return: 0-Succes process or 1-Error process
 */
int main(int argc, char **argv)
{
	int a, b, res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = multiplyArgument(a, b);
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
