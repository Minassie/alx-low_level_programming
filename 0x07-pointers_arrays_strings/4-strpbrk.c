#include "main.h"
/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: The string to be scanned
 * @accept: The string to be matched
 * Return: A pointer that matches one of the bytes in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; accept[j]; j++)
	{
		if (*(s + i) == *(accept + j))
		{
			return (s + i);
		}
	}
	}
	return (NULL);
}
