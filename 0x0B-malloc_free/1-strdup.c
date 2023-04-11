#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - allocates a new block of memory and creates a duplicate of the Input string
  *@str: input type string
  *Return: 0
*/
char *_strdup(char *str)
{
	char *new_ch;
	int i = 0;
	int l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		new_ch =malloc(sizeof(char) * (i + 1));

		if (new_ch == NULL)
		{
			return (NULL);
		}
		for (l = 0; l < str[l]; l++)
		{
			new_ch[l] = str[l];
		}
		return (new_ch);
	}
}
