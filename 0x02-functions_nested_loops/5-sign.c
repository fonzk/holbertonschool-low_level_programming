#include "holberton.h"
/**
 * print_sign - print that
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * @n: 1 if c is a letter, lowercase or uppercase
 * Return: 1 0 -1
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(43);
return (1);
}
}
