#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - excutes a function given as parameter
  * on each element of an array
  * @array: a pointer to the array of integers
  * @size: size of the array.
  * @action: a pointer ti the function that needs to be excuted
  * on each element of the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

