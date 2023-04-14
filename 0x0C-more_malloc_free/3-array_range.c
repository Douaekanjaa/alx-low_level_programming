#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array of integers that contains all values
  * between min and max
  * @min: input
  * @max: input
  * Return: pointer to an array of integers
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

