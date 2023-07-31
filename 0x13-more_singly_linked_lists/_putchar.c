#include "lists.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: the character to be printed
 * Return: 1(success)
 * on error: -1 is returned, and errno is set appropiately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
