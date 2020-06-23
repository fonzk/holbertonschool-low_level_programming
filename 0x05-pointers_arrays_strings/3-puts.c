#include "holberton.h"

/**
 * _puts - Write a function that prints a string.
 * @str: a variable string as referencia
	*
 * followed by a new line.
	* Return: none.
 */

void _puts(char *str)
{
int i = 0; /* counter*/
char nully = '\0'; /* this is the last char as null*/
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar(10);

}
