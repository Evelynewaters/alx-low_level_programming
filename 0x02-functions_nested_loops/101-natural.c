#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	_putchar((sum / 100) + '0');
	_putchar(((sum / 10) % 10) + '0');
	_putchar((sum % 10) + '0');
	_putchar('\n');
	return (0);
}
