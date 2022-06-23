#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string.
 * @s: the given string.
 * Return: the value.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}

