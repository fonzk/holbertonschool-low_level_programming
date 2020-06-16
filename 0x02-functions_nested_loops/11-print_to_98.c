#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
int number = n;
if (number <= 0 || number <= 98)
for (; number < 98; number++)
printf("%i, ", number);
else
for (; number > 98; number--)
printf("%i, ", number);
printf("%i\n ", 98);
}
