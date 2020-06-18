#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
	* Return: none.
 */

void more_numbers(void)
{
	int h, t, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			h = j / 10;
				t = j % 10;
			if (j >= 10)
			{
				_putchar(h + '0');
			}
				_putchar(t + '0');
		}
			_putchar('\n');
	}

}
