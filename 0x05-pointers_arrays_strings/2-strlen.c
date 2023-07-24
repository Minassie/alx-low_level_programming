#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be counted
 *
 * Return: size of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	i = i + 1;
	return (i);
}
