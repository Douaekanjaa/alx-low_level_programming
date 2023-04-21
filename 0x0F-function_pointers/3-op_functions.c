#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The product of a and b.
 */
	

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divise of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of two numbers.
 * @a: irst number.
 * @b: second number.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}


