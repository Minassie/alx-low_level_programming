#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: the concatenated string
 * @src: string to be concatenated
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
