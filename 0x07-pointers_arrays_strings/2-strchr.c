#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: The string to be scanned
 * @c: The character to be searched in the string
 * Return: a pointer to the first occurence or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		return (s + i);
		i++;
	}
	return (NULL);
}
