#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to test
 *
 * Return: 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
