#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *
  *
  *
  *
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
		while (ptr[a] != '\0')
		{
			printf("%c", ptr[a]);
			a++;
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