#include "holberton.h"

/**
	* reverse_array - reverse array.
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
	for (; j < n && n > 0; j++)
	{
		a[j] = b[(n - 1) - j];
	}
}
