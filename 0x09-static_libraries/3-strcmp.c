#include "main.h"
/**
 * _strcmp - compare string values
 * @str1: Input
 * @str2: Input
 *
 * Return: str1[i] - str2[i]
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
