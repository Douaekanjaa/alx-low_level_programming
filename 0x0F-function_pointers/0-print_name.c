#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - print a name
  * @name: string
  * @f: pointer to function
  * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}

