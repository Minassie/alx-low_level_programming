#include "main.h"

/**
 * _isupper - checks @c for uppercase character
 * @c: The value to be checked
 *
 * Return: 1 if c is uppercase
 * Otherwise, 0 is returned
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
