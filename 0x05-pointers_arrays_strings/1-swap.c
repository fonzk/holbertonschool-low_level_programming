#include "holberton.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: a variable as referencia
	* @b: a variable as referencia
 * followed by a new line.
	* Return: none.
 */

void swap_int(int *a, int *b)
{
int aa;

aa = *a;

*a = *b;
*b = aa;

}
