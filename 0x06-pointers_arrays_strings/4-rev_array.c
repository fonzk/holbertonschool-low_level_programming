#include "holberton.h"
#include <stdio.h>

/**
	* reverse_array - compare.
	* @a: string to reverse
	* @n: len de string
	*
	* Return: int
	*/
void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	int b[n];

	for (; i < n; i++)
	{
		b[i] = a[i];
	}
	for (; j < n; i++)
	{
		a[i] = b[n - i];
	}
}
