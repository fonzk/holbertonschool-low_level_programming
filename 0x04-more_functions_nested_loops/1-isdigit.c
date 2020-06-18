#include "holberton.h"

/**
 * _isdigit - is digit? funcion
 * @c: the int number to evaluete as uppercase ASCII
 *
 * Return: 1 is digit.
 * otherwise,0 is returned.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
