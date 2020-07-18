#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - prints strings
  *@separator: string what separator of numbers
  *@n: strings of parameters passed of function
  *Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, a = 0;
	char *ptr;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr != NULL)
		{
			while (ptr[a] != '\0')
			{
				printf("%c", ptr[a]);
				a++;
			}
		}
		else
		{
			printf("(nil)");
		}
		if ((separator != NULL) && (i + 1) != n)
		{
			printf("%s", separator);
		}
		a = 0;
	}
	va_end(list);
	printf("\n");
}
