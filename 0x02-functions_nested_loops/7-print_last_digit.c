#include "holberton.h"
/**
 * _abs - returns absolute value of parameter
 *
 * @n: int to turn to absolute value
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
/**
 * print_last_digit - return last number
 *
 * @n: int to put number and find the last numert
 * Return: Number.
 */
int print_last_digit(int n)
{
int lit;
lit = _abs(n);
lit	%= 10;
_putchar(lit + '0');
return (lit);
}
