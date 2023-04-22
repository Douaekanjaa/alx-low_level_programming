#include "main.h"

/**
  * _strlen_recursion - print the lenght of a given string
  * @s: string
  * Return: lenght of a string
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	
	}

	return (l);
}

