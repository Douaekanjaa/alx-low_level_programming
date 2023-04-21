#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - a function that prints everything
  * @format: A list pf types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;

	const char *p = format;

	while (*p)
	{
		switch (*p)
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		p++;

		if (*p && (*(p - 1) == 'c' || *(p - 1) == 'i'
					|| *(p - 1) == 'f' || *(p - 1) == 's'))
		{
			printf(", ");
		}
		printf("\n");
		va_end(args);
}
}


