#include "main.h"
/**
  * _memset - fil block of memory with specific value
  * @s: adress of memory to be filled
  * @b: value
  * @n: number of bytes to change
  * Return: array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

