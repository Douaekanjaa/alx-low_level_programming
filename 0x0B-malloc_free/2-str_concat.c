#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concate two strings
  *@s1: input string
  *@s2: input string
  *Return: concatinition of two strings
*/
char *str_concat(char *s1, char *s2)
{
	char *resultat;
	size_t leng1 = strlen(s1);
	size_t leng2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	resultat = (char *)malloc((leng1 + leng2 + 1) * sizeof(char));

	if (resultat == NULL)
	{
		return (NULL);
	}

	memcpy(resultat, s1, leng1);
	memcpy(resultat + leng1, s2, leng2);
	resultat[leng1 + leng2] = '\0';

	return (resultat);

}

