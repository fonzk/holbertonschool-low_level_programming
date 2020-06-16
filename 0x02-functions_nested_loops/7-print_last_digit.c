#include "holberton.h"

/**
 * print_last_digit - return last number
 *
 * @n: int to put number and find the last numert
 * Return: Number.
 */
int print_last_digit(int n)
{
int number, ldigit;
if (n < 0)
{
number = -1 * n;
}
else
{
number = n;
}
ldigit	= number % 10;
_putchar('0' + ldigit);
return (ldigit);
}
