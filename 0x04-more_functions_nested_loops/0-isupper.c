#include "holberton.h"

/**
 * _isupper - writes the character c to stdout
 * @c: the int number to evaluete as uppercase ASCII
 *
 * Return: 1 is UPPERCASE.
 * otherwise,0 is returned.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
