#include <stdio.h>
#include <stdlib.h>
/**
  *op_add - addition of two integer
  *@a:first digit
  *@b:second digit
  *Return: response of operation
*/
int op_add(int a, int b)
{
	int res = a + b;

	return (res);
}
/**
  *op_sub - difference of two values
  *@a:first digit
  *@b:second digit
  *Return: response of operation
*/
int op_sub(int a, int b)
{
	int res = a - b;

	return (res);
}
/**
  *op_mul - product of two values
  *@a:first digit
  *@b:second digit
  *Return: response of operation
*/
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}
/**
  *op_div -result of the division of two values
  *@a:first digit
  *@b:second digit
  *Return: response of operation
*/
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
  *op_mod -remainder of the division of two values
  *@a:first digit
  *@b:second digit
  *Return: response of operation
*/
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
