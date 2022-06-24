#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns the difference of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
