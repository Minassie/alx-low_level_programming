#include <stdio.h>

/**
 * main - Prints the program name.
 * @argc: Counts the number of arguments given to the program
 * @argv: An array of pointers tothe arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{

	printf("%s\n", *argv);

	return (0);
}
