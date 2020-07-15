#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - print name
  *@name: name to add
  *@f: pointer the function
  *Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
