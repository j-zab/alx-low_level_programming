#include "main.h"

/**
 * flip_bits - returns the number of bits neededto flip
 * @n: - the first number
 * @m: - the second number
 * Return: - the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
