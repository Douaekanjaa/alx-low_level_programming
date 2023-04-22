#include "main.h"

/**
  * _pow_recursion - calculate x pow y.
  * @x: value to raise
  * @y: power
  * Return: the result of x pow y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

