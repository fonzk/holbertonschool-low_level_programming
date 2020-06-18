#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: this determenate the numver of line
	* Return: none.
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		m = n;
		for (; m > 0; m--)
		{
			_putchar(95);
		}
	}
	_putchar('\n');


}
