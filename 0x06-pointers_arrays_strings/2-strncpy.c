#include "main.h"
/**
 * _strncpy - a function that copies string from src to dest
 * @dest: the copied string destination
 * @src: the string to be copied
 * @n: largest amount to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
