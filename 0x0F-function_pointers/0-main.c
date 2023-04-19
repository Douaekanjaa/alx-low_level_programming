#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name_as_is - prints a name is
  * @name: name of the person
  * Return: nothing
*/

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
  * print_name_uppercase - print a name is uppercase
  * @name: name of the person
  * Return: nothing
*/

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
  * main - Check the code
  * Return: always 0
*/

int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}

