#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * create_array - creat an array and initialize it with a characteri
  *@size: size of the array
  *@c: The character to initialize with
  *Return: a pointer, NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	tableau = (char *) malloc(size * sizeof(char));
	if (tableau == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}
	return (tableau);
}

