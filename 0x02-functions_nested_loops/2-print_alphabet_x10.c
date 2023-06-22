#include "main.h"

/**
 * print_alphabet_x10 - main entry point of the program
 *  function that prints 10 times the alphabet, in lowercase.
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
char alph;
int count = 0;

while (count++ <= 9)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
}
