#include <stdlib.h>
#include "main.h"

/**
  * argstostr - concatenate all the argument of the program
  *@ac: input
  *@av: double pointer arrray
  *Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *ch;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	ch = malloc(sizeof(char) * l + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ch[k] = av[i][j];
			k++;
		}
		if (ch[k] == '\0')
		{
			ch[k++] = '\n';
		}
	}
	return (ch);
}


