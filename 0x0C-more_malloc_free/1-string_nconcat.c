#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concatenates the first n characters of two strings
  *@s1: input
  *@s2: imput
  *@n: the number of characters to be concatenated
  *Return: a new string allocated in the heap
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t leng_s1, leng_s2;
	char *resultat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng_s1 = strlen(s1);
	leng_s2 = strlen(s2);

	if (n > leng_s2)
		n = leng_s2;

	resultat = (char *) malloc((leng_s1 + n + 1) * sizeof(char));

	if (resultat == NULL)
		return (NULL);

	memcpy(resultat, s1, leng_s1);
	memcpy(resultat + leng_s1, s2, n);
	resultat[leng_s1 + n] = '\0';

	return (resultat);
}

