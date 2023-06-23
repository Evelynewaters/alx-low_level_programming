#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
