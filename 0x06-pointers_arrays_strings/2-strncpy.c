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
	int i = 0, j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
