#include "main.h"

/**
 * _isdigit - checks @c for a digit (0 through 9)
 * @c: The value to be checked
 *
 * Return: 1 if c is a digit
 * Otherwise, 0 is returned
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
