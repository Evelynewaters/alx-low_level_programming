#include "main.h"
/**
 * flip_bits - counts the num of bits you would need to flip
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive)
	{
		count += exclusive & 1;
		exclusive >>= 1;
	}
	return (count);
}
