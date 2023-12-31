#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to memory area where the function is stored
 * @src: memory where the function is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
