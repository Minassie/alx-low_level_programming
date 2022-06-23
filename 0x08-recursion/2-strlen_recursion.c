#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string.
 * @s: the given string.
 * Return: the value.
 */
int _strlen_recursion(char *s)
{
	static int i = 0;
	if (*s)
	{
	_strlen_recursion(s + 1);
	i++;
	}
	return i;
}
