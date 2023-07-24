#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - Convet a binary nb to unsigned int.
  * @b: pointer to string of 0 & 1 chars
  * Return: converted number or 0 or b
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;
	int i;

	nb = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			nb = nb * 2 + (b[i] - '0');
		}
		else
			return (0);
	}

	return (nb);
}

