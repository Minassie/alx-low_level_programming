#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: the size of chars
 * @c: the char
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	}
	return (s);
}
