#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
int a, b;
int m = n;
if (m <= 0 || m <= 98)
{
for (a = n; a < 98; a++)
{
printf("%i, ", a);
}
printf("%i\n", 98);
}
else
{
for (b = n; b > 98; b--)
{
printf("%i, ", b);
}
}
}
