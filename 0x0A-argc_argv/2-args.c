#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: Counts the number of arguments given to the program
 * @argv: An array of pointers tothe arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
