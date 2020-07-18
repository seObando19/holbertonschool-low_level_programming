#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers,
  *@separator: string what separator of numbers
  *@n: numbers of parameters passed of function
  *Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if ((separator != NULL) && (i + 1) != n)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
