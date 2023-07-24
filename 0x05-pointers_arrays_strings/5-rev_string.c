#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be printed
 */

void rev_string(char *s)
{
	int i, n, k;

	for (i = 0; s[i] != '\0'; i++);
	
	for (k = 0, n = i - 1; n != 0; k++,n--)
	{
		s[k] = s[n];
	}
}
