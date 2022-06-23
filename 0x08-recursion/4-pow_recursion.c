#include "main.h"
/**
 * _pow_recursion - a function that returns a value raised to other value
 * @x: the base value
 * @y: the value that raise the base value
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
