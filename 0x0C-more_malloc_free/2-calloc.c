#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * _calloc - dynamically allocates for an array
  *@nmemb: the number of elements to be allocated in the allocated memory
  *@size: size of each element in bytes
  *Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);

	memset(pt, 0, nmemb * size);

	return (pt);
}

