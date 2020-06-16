#include "holberton.h"

/**
 * print_alphabet_x10 - use _putchar to print alphabetx10
 * Description: use _putchar to print a to z x 10
 * Return: print every alphabet
 */

void print_alphabet_x10(void)
{
for (int i = 0; i <= 9 ; i++)
{
for (int letter = 97 ; letter <= 122 ; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
