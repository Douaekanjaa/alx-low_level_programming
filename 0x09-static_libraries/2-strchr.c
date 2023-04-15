#include "main.h"
/**
  * _strchr - entry points
  * @s: Input
  * @c: Input
  * Return: Always 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] == c; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

