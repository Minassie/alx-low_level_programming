#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: the given string
 * Return: the computed length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	len++;
	return (len);
}
