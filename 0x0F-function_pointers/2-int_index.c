#include "function_pointers.h"

/**
  * int_index - Search for an integer
  * @array: array
  * @size: the number of element in array
  * @cmp: a pointer
  * Return: -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}

	}

	return (-1);
}

