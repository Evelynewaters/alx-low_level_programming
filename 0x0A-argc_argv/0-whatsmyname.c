#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program and a new line
 * @argc: number of arguments
 * @argv: array of arguments on CLI
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
