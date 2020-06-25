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
	int j = 0, tem = 0;

	for (; j < n - j; j++)
	{
		tem = a[j];
		a[j] = a[(n - 1) - j];
a[(n - 1) - j] = tem;
	}
}
