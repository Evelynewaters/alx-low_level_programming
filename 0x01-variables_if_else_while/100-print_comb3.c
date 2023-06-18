#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0(success)
 */
int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 56; c++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (c < d)
			{
				putchar(c);
				putchar(d);
				if (c == 56 && d == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
