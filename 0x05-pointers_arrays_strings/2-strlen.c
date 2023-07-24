#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be counted
 *
 * Return: size of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
