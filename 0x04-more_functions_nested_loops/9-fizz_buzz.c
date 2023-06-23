#include "main.h"
#include <stdio.h>
/**
 * _putchar - Prints a character to stdout
 * @c: The character to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * fizz_buzz - Prints numbers from 1 to 100, replacing multiples of 3 with Fizz
 *             multiples of 5 with Buzz, and multiples of both with FizzBuzz.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			puts("FizzBuzz");
		else if (i % 3 == 0)
			puts("Fizz");
		else if (i % 5 == 0)
			puts("Buzz");
		else
			_putchar(i + '0');

		if (i != 100)
			_putchar(' ');
	}

	_putchar('\n');
}
int main(void)
{
	fizz_buzz();
	return 0;
}
