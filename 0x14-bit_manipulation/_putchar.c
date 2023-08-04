#include "main.h"
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * Return: 0(success), -1(on error) and set errno appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
