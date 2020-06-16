#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n: integer input
 *
 * Return: void
 */
void print_times_table(int n)
{
int a, b, m;
	
	a = 0;
		if (!(n > 15 || n < 0))
	{
	while (a<=n)
{
	_putchar('0');
	b = 1;
	while (b<=n)
	{
		m = b * a;
if (m < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(m + '0');
	}
	else if (m >= 10 && m < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(m / 100 + '0');
		_putchar(m / 10 % 10 + '0');
		_putchar(m % 10 + '0');
	}
		b++;
	}
_putchar('\n');
	a++;
}



	}

}
