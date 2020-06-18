#include "holberton.h"

/**
 * print_triangle -  draws a diagonal line on the terminal.
 * @size: this determenate the numver of duagonal
	* Return: none.
 */

void print_triangle(int size)
{
	int m, s, d, q;

	m = size;

	if (m > 0)
	{
		for (s = 1; s <= m; s++)
		{
			for (d = 0; d < m - s; d++)
			{
				_putchar(32);
			}

			for (q = 1; q <= s; q++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
