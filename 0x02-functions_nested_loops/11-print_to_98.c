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
int num = n;
if (num <= 0 || num <= 98)
{
for (; num < 98; num++)
{
printf("%i, ", num);
}
printf("%i\n", 98);
}
else
{
for (; num > 98; num--)
{
printf("%i, ", num);
}
}
}
