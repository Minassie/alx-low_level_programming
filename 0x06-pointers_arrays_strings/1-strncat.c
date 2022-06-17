#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: the concatenated string
 * @src: string to be concatenated
 * @n: largest amount to be appended
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
