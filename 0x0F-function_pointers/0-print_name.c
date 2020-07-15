#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name - print name
  *@name: name to add
  *@f: pointer the function
  *Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!(f == NULL))
	{
		f(name);
	}
}
