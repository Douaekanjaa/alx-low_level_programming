#include "main.h"

/**
 * helper - find the square root of a number
 * @start: the start of the range
 * @end: the end of the range
 * @n: number
 * Return: res
*/
int helper(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
	int midSqr = mid * mid;
	int res;

	if (start > end)
	{
		return (-1);
	}
	if (midSqr == n)
	{
		return (mid);
	}
	else if (midSqr > n)
	{
		return (helper(n, start, mid - 1));
	}
	else
	{
		res = helper(n, mid + 1, end);
		if (res == -1)
		{
			return (-1);
		}
		else
		{
			return (res);
		}
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number
  * Return: n or -1 if the input number doesn't have a natural sqaure root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (helper(n, 1, n));
}

