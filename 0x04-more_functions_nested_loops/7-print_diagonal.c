#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: this determenate the numver of duagonal
	* Return: none.
 */

void print_diagonal(int n)
{
	int m, j, k;

	m = n;
		if (m > 0)
	{
		for (j = 0; j < m; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
