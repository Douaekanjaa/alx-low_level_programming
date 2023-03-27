#include "main.h"

/**
 * swap_int -> Swaps the values of two integers
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
