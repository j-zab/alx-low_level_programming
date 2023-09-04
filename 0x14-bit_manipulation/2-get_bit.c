#include "main.h"

/**
 * get_bit - it returns the value of a bit at a given index.
 * @n: number to extract the bit from.
 * @index: The index of the bit to retrieve ie. starting from 
 * Return: value of the bit at the given index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8) /* Check if the index is out of range */
		return (-1);

	return ((n >> index) & 1); /* Shift right to the index and extract the bit */
}
