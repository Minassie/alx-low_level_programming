#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be checked
 *
 * Return: the absolute value of the given number
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
