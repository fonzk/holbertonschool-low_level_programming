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
n =_abs(n);
lit	= n % 10;
_putchar('0' + lit);
return (lit);
}
