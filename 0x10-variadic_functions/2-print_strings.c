#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - print strings followed by a new line
  * @n: The number of strings passed
  * @separator: the string to be printed between the strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg_list, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(arg_list);

	printf("\n");
}

