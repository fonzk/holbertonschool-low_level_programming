#include "holberton.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
	* Return: none.
 */

void print_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
