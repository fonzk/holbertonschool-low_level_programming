#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array
 * @a: a variable string as referencia
	* @n: number to print
 * followed by a new line.
	* Return: none.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf('\n');
}
