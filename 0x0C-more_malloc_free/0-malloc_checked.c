#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocate a block of memory of the specified size and terminate
  * the program with an error if the memory allocation fails
  * Return: a pointer to the allocated memory block
*/

void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
