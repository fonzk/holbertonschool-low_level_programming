#include "holberton.h"

/**
 * print_last_digit - return last number
 *
 * @n: int to put number and find the last numert
 * Return: Number.
 */
int print_last_digit(int n)
{
int Number, Ldigit;
if (n < 0)
Number = -1 * n;
else
Number = n;
Ldigit	= Number % 10;
_putchar('0' + Ldigit);
return (Ldigit);
}
