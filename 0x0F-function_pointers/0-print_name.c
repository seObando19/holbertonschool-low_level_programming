#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - print name
  *@name: name to add
  *@f: pointer the function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
