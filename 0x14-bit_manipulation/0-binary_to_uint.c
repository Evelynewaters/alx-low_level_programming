#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of the binary
 *
 * Return: the unsigned number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int eve_lyn = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		eve_lyn = 2 * eve_lyn + (b[i] - '0');
	}
	return (eve_lyn);
}
