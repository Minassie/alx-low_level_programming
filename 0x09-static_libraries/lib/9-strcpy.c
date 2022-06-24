#include "main.h"

/**
 * _strcpy - copies string to destination
 * @src: source of copy
 * @dest: destination of the copied file
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
