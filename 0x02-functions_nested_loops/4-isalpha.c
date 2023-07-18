#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c alphabetic character 0 otherwise
 */

int _isalpha(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else if (c < 92 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
