#include "holberton.h"

/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9,
 * Do not print 2 and 4
 * followed by a new line.
	* Return: none.
 */

void print_most_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		if (!(i == 50 || i == 52))
		{
			_putchar(i);
		}

	}
	_putchar('\n');
}