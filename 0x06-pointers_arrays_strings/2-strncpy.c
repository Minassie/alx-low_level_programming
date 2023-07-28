#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the first string to store the result
 * @src: the second string
 * @n: the most n bytes
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	if (j < n)
	{
		for (; j < n; j++)
		dest[j] = '\0';
	}
	return (dest);
}
