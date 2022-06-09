#include "main.h"

/**
 * _isdigit - checks for whole numbers upto 9.
 * @c: checks the value
 * Return: the specified valures
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
