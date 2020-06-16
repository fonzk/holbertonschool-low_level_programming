#include "holberton.h"

/**
 * print_alphabet_x10 - use _putchar to print alphabetx10
 * Description: use _putchar to print a to z x 10
 * Return: print every alphabet
 */

void print_alphabet_x10(void)
{
int a, letter;
for (a = 0; a < 10; a++)
{
for (letter = 97; letter < 123; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
return;
}
