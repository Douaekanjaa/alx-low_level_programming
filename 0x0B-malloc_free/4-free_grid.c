#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees a two kdimensional greed
  *@grid: grid
  *@height: height of grid
  *Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
