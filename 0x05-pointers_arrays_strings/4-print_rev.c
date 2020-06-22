#include "holberton.h"

/**
 * print_rev - Write a function that prints a string, in reverse.
 * @s: a variable string as referencia
	*
 * followed by a new line.
	* Return: none.
 */

void print_rev(char *s)
{
int i = 0; /* counter*/

char nully = '\0'; /* this is the last char as null*/
while (s[i] != nully)
	i++;
int z = i;

for (; z >= 0; z--)
_putchar(s[z]);
_putchar(10);

}
