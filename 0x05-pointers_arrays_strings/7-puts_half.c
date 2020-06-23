#include "holberton.h"

/**
 * puts_half - the second half of the string
 * @str: a variable string as referencia
	*
 * followed by a new line.
	* Return: none.
 */

void puts_half(char *str)
{
	int len = 0, i = 0, s = 0;

	while (str[len] != '\0')
	{
		len++;
	}

if (len % 2 != 0)
{
	s = (len - 1) / 2;
}
else
{
	s = len  / 2;
}
i = s;
for (; i < len; i++)
	_putchar(str[i]);
_putchar('\n');
}
