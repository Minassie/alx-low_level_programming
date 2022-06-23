#include "main.h"
/**
 * sqrt_fun - computes the square root.
 * @x: iterates to sqrt
 * @y: the number to get the sqrt
 * Return: -1 or sqrt of y.
 */

int sqrt_fun(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_fun(x + 1, y));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of
 *
 * @n: the given number
 *
 * Return: the square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_fun(1, n));
}
