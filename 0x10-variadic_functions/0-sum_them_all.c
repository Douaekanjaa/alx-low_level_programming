#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Calculate the sum of all passed parameters
  * @n: the number of parameters passed
  * Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int s = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}

	va_end(args);

	return (s);
}


