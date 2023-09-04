#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representing a number
 * @n: decimal number to be printed as binary
 */
void print_binary that is unsigned long int n
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}
