#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @binary: binary given
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int length = strlen(binary);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (binary[i] == '1')
		{
			result += pow(2, length - 1 - i);
		}
		else if (binary[i] != '0')
		{
			return (0);
		}
	}

	return (result);
}
