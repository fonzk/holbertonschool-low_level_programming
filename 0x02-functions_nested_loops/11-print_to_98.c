#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
int m = n;
if (m <= 0 || m <= 98)
{
for (; m < 98; m++)
{
printf("%i, ", m);
}
printf("%i\n", 98);
}
else
{
for (; m > 98; m--)
{
printf("%i, ", m);
}
}
}
